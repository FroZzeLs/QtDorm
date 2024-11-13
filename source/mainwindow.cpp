#include "./../headers/mainwindow.h"
#include "./ui_mainwindow.h"
#include "./../headers/studentswindow.h"
#include "./../headers/addstudentwindow.h"
#include "./../headers/reportswindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dtb = new Database("./../../Dormitory.db", statusBar());
    dtb->createTables();
    QPixmap pix(":/bsuir/img/small_logo.jpg");
    int width = ui->bsuirLogo->width();
    int height = ui->bsuirLogo->height();

    ui->bsuirLogo->setPixmap(pix.scaled(width, height, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_students_clicked()
{
    Students* studWindow;
    studWindow = new Students(dtb, this);
    studWindow->show();
}

void MainWindow::on_addStudent_clicked()
{
    AddStudentWindow* addWindow;
    addWindow = new AddStudentWindow(dtb, this);
    addWindow->show();
}

void MainWindow::on_closeButton_clicked()
{
    close();
}


void MainWindow::on_reports_clicked()
{
    ReportsWindow* reports;
    reports = new ReportsWindow(this);
    reports->show();
}

