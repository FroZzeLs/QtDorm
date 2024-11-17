#include "./../headers/reportswindow.h"
#include "ui_reportswindow.h"

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
