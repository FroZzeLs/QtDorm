#include "./ui_mainwindow.h"
#include "./../headers/mainwindow.h"
#include "./../headers/reportswindow.h"
#include "./../headers/addstudentwidget.h"
#include "./../headers/studentswidget.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dtb = new Database("/home/sergey/Dormitory/Dormitory.db", statusBar());
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
    defaultShowWidget<StudentsWidget>(dtb, this);
}

void MainWindow::on_addStudent_clicked()
{
    defaultShowWidget<AddStudentWidget>(dtb, this);
}

void MainWindow::on_closeButton_clicked()
{
    close();
}

void MainWindow::on_reports_clicked()
{
    QLayoutItem* item;
    while ((item = ui->workLayout->takeAt(0))) {
        delete item->widget();
        delete item;
    }

    ReportsWindow* window = new ReportsWindow(dtb, nullptr, this);
    ui->workLayout->addWidget(window);
    window->show();
}

template <typename WindowType>
void MainWindow::defaultShowWidget(Database* dtb, QWidget* current) {
    QLayoutItem* item;
    while ((item = ui->workLayout->takeAt(0))) {
        delete item->widget();
        delete item;
    }

    WindowType* window = new WindowType(dtb, current);
    ui->workLayout->addWidget(window);
    window->show();
}

