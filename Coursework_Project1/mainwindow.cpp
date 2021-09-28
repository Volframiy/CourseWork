#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addday.h"
#include "forecast.h"
#include "info.h"

int ColumnSize = 7;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStringList list;
    list << "Year" << "Mounth" << "Day" << "Temperature,C" <<
            "Pressure,mm" << "Humidity,%" << "WindDirection";

    ui->WeatherTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->WeatherTable->setSelectionMode(QAbstractItemView::NoSelection);
    ui->WeatherTable->setColumnCount(ColumnSize);
    ui->WeatherTable->setRowCount(0);
    ui->WeatherTable->setHorizontalHeaderLabels(list);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::Check()
{
    if(!ui->WeatherTable->rowCount())
    {
        ui->ErrorLabel->setText("Error : table is empty");
        return true;
    }

    return false;
}

bool MainWindow::Check(QListWidget *list)
{
    if(!ui->WeatherTable->rowCount())
    {
        ui->ErrorLabel->setText("Error : table is empty");
        return true;
    }

    if(list->count())
        list->clear();

    return false;
}

bool MainWindow::Check(QListWidget *list, int first, int last)
{
    if(!ui->WeatherTable->rowCount())
    {
        ui->ErrorLabel->setText("Error : table is empty");
        return true;
    }

    if(first < 1 || last > ui->WeatherTable->rowCount())
    {
        ui->ErrorLabel->setText("Error : wrong period indices ");
        return true;
    }

    if(list->count())
        list->clear();

    return false;
}

void MainWindow::on_ClearButton_clicked()
{
    for (int i = 0 ; i  < ui->WeatherTable->rowCount() ; i++)
        for(int j = 0 ; j < ui->WeatherTable->colorCount() ; j++)
            if(ui->WeatherTable->item(i , j) != nullptr)
                delete ui->WeatherTable->item(i , j);

    ui->WeatherTable->setRowCount(0);
}

void MainWindow::on_FillButton_clicked()
{
    QString nameFile = QFileDialog :: getOpenFileName(this , "Open a file");
    QFile file(nameFile);

    if(!file.open(QFile :: ReadOnly | QFile :: Text))
    {
        QMessageBox :: warning(this , "Error" , "File is not open");
        file.close();
        return;
    }

    QTextStream stream(&file);

    on_ClearButton_clicked();

    while (!stream.atEnd())
    {
        Weather weather;
        stream >> weather;
        ui->WeatherTable << weather;
    }

    file.close();
}

void MainWindow::on_SaveButton_clicked()
{
    QString nameFile = QFileDialog :: getOpenFileName(this , "Open a file");
    QFile file(nameFile);

    if(!file.open(QFile ::WriteOnly | QFile :: Text | QFile :: Append))
    {
        QMessageBox :: warning(this , "Error" , "File is not open");
        file.close();
        return;
    }

    QTextStream stream(&file);
    stream << "New" << "\n";

    for (int i = 0 ; i < ui->WeatherTable->rowCount() ; i++)
    {
        QStringList list;

        for (int j = 0 ; j < ColumnSize ; j++)
            list << ui->WeatherTable->item(i , j)->text();

        Weather weather(Date(list[0].toInt(), list[1].toInt(), list[2].toInt()),
                list[3].toDouble() , list[4].toInt(), list[5].toInt(), list[6]);

        stream << weather;
    }

    file.close();
}

void MainWindow::on_AddDayButton_clicked()
{
    AddDay day(this);
    day.exec();
}

void MainWindow::on_AverageHumButton_clicked()
{
    if(Check())
        return;

    double sum = 0;
    int count = 0;

    for (int i = ui->WeatherTable->rowCount() - 1 ; i >= 0 && count < 30  ; --i , count++)
        sum += ui->WeatherTable->item(i , 5)->text().toInt();

    ui->AverageHumidity->setText(QString :: number(sum/count));
    ui->ErrorLabel->setText("");
}

void MainWindow::on_pushButton_4_clicked()
{
    if(Check(ui->MaxTemperature))
        return;

    QString str = "";
    double maxTemp = -100;
    int size = 0;
    int arrIndx[ui->WeatherTable->rowCount()];

    for(int i = 0 ; i < ui->WeatherTable->rowCount() ; i++)
        if(ui->WeatherTable->item(i , 3)->text().toDouble() > maxTemp)
            maxTemp = ui->WeatherTable->item(i , 3)->text().toDouble();

    for(int i = 0 ; i < ui->WeatherTable->rowCount() ; i++)
        if(ui->WeatherTable->item(i , 3)->text().toDouble() == maxTemp)
            arrIndx[size++] = i;

    for(int i = 0 ; i < size ; i++)
    {
        str = ui->WeatherTable->item(arrIndx[i] , 0)->text() + "." +
                ui->WeatherTable->item(arrIndx[i] , 1)->text() +
                "." + ui->WeatherTable->item(arrIndx[i] , 2)->text() +
                " - day " + QString :: number(i + 1);

        ui->MaxTemperature->addItem(str);
        str = "";
    }

    ui->ErrorLabel->setText("");
}

void MainWindow::on_MinPressureButton_clicked()
{
    if(Check(ui->MinPressure))
        return;

    QString str = "";
    int minPress = 1000;
    int arrIndx[ui->WeatherTable->rowCount()];
    int size = 0;

    for(int i = 0 ; i < ui->WeatherTable->rowCount() ; i++)
        if(ui->WeatherTable->item(i , 4)->text().toInt() < minPress)
            minPress = ui->WeatherTable->item(i , 4)->text().toDouble();

    for(int i = 0 ; i < ui->WeatherTable->rowCount() ; i++)
        if(ui->WeatherTable->item(i , 4)->text().toInt() == minPress)
            arrIndx[size++] = i;

    for(int i = 0 ; i < size ; i++)
    {
        str = ui->WeatherTable->item(arrIndx[i] , 0)->text() + "." +
                ui->WeatherTable->item(arrIndx[i] , 1)->text() +
                "." + ui->WeatherTable->item(arrIndx[i] , 2)->text() +
                " - day " + QString :: number(i + 1);

        ui->MinPressure->addItem(str);
        str = "";
    }

    ui->ErrorLabel->setText("");
}

void MainWindow::on_WindChangeButton_clicked()
{
    if(Check(ui->WindChanges))
        return;

    QString str = "";
    int count = 0 , len = 1;
    int arrIndx[ui->WeatherTable->rowCount()];
    int arrLength[ui->WeatherTable->rowCount()];

    arrIndx[count] = 0;
    arrLength[count++] = len;

    for(int i = 0 ; i < ui->WeatherTable->rowCount() - 1 ; i++)
    {
        if(ui->WeatherTable->item(i , ColumnSize - 1)->text() == ui->WeatherTable->item(i + 1 , ColumnSize - 1)->text())
        {
            arrLength[count - 1] = ++len;
        }
        else
        {
            len = 1;
            arrIndx[count] = i + 1;
            arrLength[count++] = len;
        }
    }

    for(int i = 0 ; i < count ; i++)
    {
        if(arrLength[i] == 1)
            continue;

        str = ui->WeatherTable->item(arrIndx[i] , 0)->text() +
                "." + ui->WeatherTable->item(arrIndx[i] , 1)->text() +
                "." + ui->WeatherTable->item(arrIndx[i] , 2)->text();

        str += " - ";

        str += ui->WeatherTable->item(arrIndx[i] + arrLength[i] - 1 , 0)->text() + "." +
                ui->WeatherTable->item(arrIndx[i] + arrLength[i] - 1 , 1)->text() + "." +
                ui->WeatherTable->item(arrIndx[i] + arrLength[i] - 1 , 2)->text();

        str += " " + QString :: number(arrLength[i]) + " days";

        ui->WindChanges->addItem(str);
        str = "";
    }

    ui->ErrorLabel->setText("");
}

void MainWindow::on_PeriodButton_clicked()
{
    int first = ui->First->text().toInt();
    int last = ui->Last->text().toInt();

    if(Check(ui->InfoPeriod , first , last))
        return;

    double tempAverage = 0;
    int maxHum = -1 , size = 0;
    int arrIndx[ui->WeatherTable->rowCount()];
    QString str = "Days with max humidity : \n";

    for(int i = first - 1 ; i < last ; i++)
    {
        if(ui->WeatherTable->item(i , 5)->text().toInt() > maxHum)
            maxHum = ui->WeatherTable->item(i , 5)->text().toInt();

        tempAverage += ui->WeatherTable->item(i , 3)->text().toDouble();
    }

    for(int i = first - 1 ; i < last ; i++)
        if(ui->WeatherTable->item(i , 5)->text().toInt() == maxHum)
            arrIndx[size++] = i;

    for(int i = 0 ; i < size ; i++)
    {
        str += ui->WeatherTable->item(arrIndx[i] , 0)->text() +
                "." + ui->WeatherTable->item(arrIndx[i] , 1)->text() +
                "." + ui->WeatherTable->item(arrIndx[i] , 2)->text() +
                " - day " + QString :: number(i + 1);

        ui->InfoPeriod->addItem(str);
        str = "";
    }

    str = "Average temperature : " + QString :: number(tempAverage/(last - first + 1));
    ui->InfoPeriod->addItem(str);
    ui->ErrorLabel->setText("");
}

void MainWindow::on_ChangePeriodButton_clicked()
{
    if(Check(ui->ChangePeriod))
        return;

    QString str = "";
    int count = 0 , len = 1;
    int arrIndx[ui->WeatherTable->rowCount()];
    int arrLength[ui->WeatherTable->rowCount()];
    double interestPress = 0.0143 , interestTemp = 0.05673;

    arrIndx[count] = 0;
    arrLength[count++] = len;

    double t1 = ui->WeatherTable->item(0 , 3)->text().toDouble();
    double p1 = ui->WeatherTable->item(0 , 4)->text().toInt();

    for(int i = 1 ; i < ui->WeatherTable->rowCount() ; i++)
    {
        double p2 = ui->WeatherTable->item(i , 4)->text().toInt();
        double t2 = ui->WeatherTable->item(i , 3)->text().toDouble();

        if(fabs(p2 - p1)/p1 < interestPress && fabs(t2 - t1)/t1 < interestTemp)
        {
            arrLength[count - 1] = ++len;
        }
        else
        {
            arrIndx[count] = i;
            arrLength[count++] = len = 1;
            t1 = t2;
            p1 = p2;
        }
    }

    for(int i = 0 ; i < count ; i++)
    {
        if(arrLength[i] == 1)
            continue;


        str = ui->WeatherTable->item(arrIndx[i] , 0)->text() +
                "." + ui->WeatherTable->item(arrIndx[i] , 1)->text() +
                "." + ui->WeatherTable->item(arrIndx[i] , 2)->text();

        str += " - ";

        str += ui->WeatherTable->item(arrIndx[i] + arrLength[i] - 1 , 0)->text() +
                "." + ui->WeatherTable->item(arrIndx[i] + arrLength[i] - 1 , 1)->text() +
                "." + ui->WeatherTable->item(arrIndx[i] + arrLength[i] - 1 , 2)->text();

        str += " " + QString :: number(arrLength[i]) + " days";

        ui->ChangePeriod->addItem(str);
        str = "";
    }

    ui->ErrorLabel->setText("");
}


void MainWindow::on_DiagramButton_clicked()
{
    if(Check())
        return;

    QChart * temp = new QChart();
    if(diagram.chart != nullptr)
    {
        ui->Diagram->setChart(temp);
        diagram.DeleteGraphic();
    }

    QStringList names;
    names << "Temperature" << "Pressure" << "Humidity";

    diagram.series = new QLineSeries*[3] {new QLineSeries() , new QLineSeries() , new QLineSeries()};
    diagram.chart = new QChart();

    for (int i = 0 ; i < names.count() ; i++ )
    {
        diagram.series[i]->setName(names[i]);

        for (int j = 0 ; j < ui->WeatherTable->rowCount()  ; j++ )
            diagram.series[i]->append(j , ui->WeatherTable->item(j , i + 3)->text().toDouble());

        diagram.chart->addSeries(diagram.series[i]);
    }

    ui->Diagram->setChart(diagram.chart);

    delete temp;
}

void MainWindow::on_ForecastButton_clicked()
{
    Forecast forecast(this);
    forecast.exec();
}

void MainWindow::on_Info_clicked()
{
    Info info;
    info.exec();
}
