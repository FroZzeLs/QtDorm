#include "./ui_mainwindow.h"
#include "./../headers/mainwindow.h"
#include "./../headers/studentswindow.h"
#include "./../headers/addstudentwindow.h"
#include "./../headers/reportswindow.h"
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
    defaultShowWindow<Students>(dtb, this);
}

void MainWindow::on_addStudent_clicked()
{
    defaultShowWindow<AddStudentWindow>(dtb, this);
}

void MainWindow::on_closeButton_clicked()
{
    close();
}


void MainWindow::on_reports_clicked()
{
    defaultShowWindow<ReportsWindow>(dtb, this);
}

template <typename WindowType>
void MainWindow::defaultShowWindow(Database* dtb, QWidget* current){
    WindowType* window = new WindowType(dtb, current);
    window->show();
}

