#include "addday.h"
#include "ui_addday.h"

extern int ColumnSize;

#include <QDebug>

AddDay::AddDay(MainWindow *parent) :
    QDialog(),
    ui(new Ui::AddDay)
{
    ui->setupUi(this);

    mw = parent;
    setWindowTitle("Add day");
}

AddDay::~AddDay()
{
    delete ui;
}

void AddDay::on_ButClose_clicked()
{
    close();
}

void AddDay::on_ButAdd_clicked()
{
    int year = ui->Year->value();
    int mounth = ui->Mounth->value();
    int day = ui->Day->value();

    if(CheckDate(year , mounth , day))
        return;

    QStringList list;
    list << QString::number(year) << QString::number(mounth) << QString::number(day) << QString :: number(ui->Temp->value())
         << ui->Press->text() << ui->Humid->text() << ui->Wind->text();

    mw->ui->WeatherTable->setRowCount(mw->ui->WeatherTable->rowCount() + 1);

    for (int i = 0 ; i < ColumnSize ; i++ )
    {
        QTableWidgetItem* temp = new QTableWidgetItem(list[i]);
        mw->ui->WeatherTable->setItem(mw->ui->WeatherTable->rowCount() - 1 , i , temp);
    }

    ui->ErrorLabel->setText("");
}

bool AddDay::CheckDate(int year, int mounth, int day)
{
    if(!(ui->Wind->text() == "West" || ui->Wind->text() == "Est"
            || ui->Wind->text() == "Northern" || ui->Wind->text() == "Southern"))
    {
        ui->ErrorLabel->setText("Wrong wind direction , choose one of these : West , Est , Northern , Southern");
        return true;
    }

    if(((mounth == 4 || mounth == 6 || mounth == 9 || mounth == 11) && day == 31) || (mounth == 2 && day > 28))
    {
        ui->ErrorLabel->setText("Wrong date , this month cannot have that many days");
        return true;
    }

    if(mw->ui->WeatherTable->rowCount() != 0)
    {
        int TableYear = mw->ui->WeatherTable->item(mw->ui->WeatherTable->rowCount() - 1 , 0)->text().toInt();
        int TableMounth = mw->ui->WeatherTable->item(mw->ui->WeatherTable->rowCount() - 1 , 1)->text().toInt();
        int TableDay = mw->ui->WeatherTable->item(mw->ui->WeatherTable->rowCount() - 1 , 2)->text().toInt();

        int arrDaysinMounths[12] = {31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31};
        int date1 = 0, date2 = 0;

        if(year < TableYear || (year - TableYear > 1) || (year - TableYear == 1 && (TableDay != 31 || TableMounth != 12)))
        {
            ui->ErrorLabel->setText("Wrong date , specify the next day after the last in the table");
            return true;
        }

        for (int i = 0 ; i < TableMounth - 1 ; i++ )
            date1 += arrDaysinMounths[i];
        date1 += TableDay;
        for (int i = 0 ; i < mounth - 1 ; i++ )
            date2 += arrDaysinMounths[i];
        date2 += day;

        if((date2 - date1 != 1 && date2 != 1 && date1 != 364) || date2 == date1)
        {
            ui->ErrorLabel->setText("Wrong date , specify the next day after the last in the table");
            return true;
        }
    }

    return false;
}
