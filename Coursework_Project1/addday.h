#ifndef ADDDAY_H
#define ADDDAY_H

#include <QDialog>

#include "mainwindow.h"
#include "ui_mainwindow.h"

namespace Ui {
class AddDay;
}

class AddDay : public QDialog
{
    Q_OBJECT

public:
    explicit AddDay(MainWindow *parent);
    ~AddDay();

    bool CheckDate(int year , int mounth , int day);

private slots:
    void on_ButClose_clicked();
    void on_ButAdd_clicked();

private:
    Ui::AddDay *ui;
    MainWindow* mw;
};

#endif // ADDDAY_H
