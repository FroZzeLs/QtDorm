#include "./../headers/reportswindow.h"
#include "ui_reportswindow.h"

ReportsWindow::ReportsWindow(QWidget *parent)
    : QDialog(parent)
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
