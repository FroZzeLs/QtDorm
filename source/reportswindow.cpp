#include "./../headers/reportswindow.h"
#include "ui_reportswindow.h"
#include "./../createreportwindow.h"

ReportsWindow::ReportsWindow(Database* db, QWidget *parent)
    : dtb(db), QDialog(parent)
    , ui(new Ui::ReportsWindow)
{
    ui->setupUi(this);
}

ReportsWindow::~ReportsWindow()
{
    delete ui;
}

void ReportsWindow::on_exit_clicked()
{
    delete this;
}

void ReportsWindow::on_allStudents_clicked()
{
    CreateReportWindow* students = new CreateReportWindow(0, this);
    students->show();
}

void ReportsWindow::on_debtors_clicked()
{
    CreateReportWindow* students = new CreateReportWindow(1, this);
    students->show();
}


void ReportsWindow::on_studentCouncil_clicked()
{
    CreateReportWindow* students = new CreateReportWindow(2, this);
    students->show();
}


void ReportsWindow::on_dd_clicked()
{
    CreateReportWindow* students = new CreateReportWindow(3, this);
    students->show();
}

