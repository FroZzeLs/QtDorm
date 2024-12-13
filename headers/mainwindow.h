#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "database.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    template <typename WindowType>
    void defaultShowWidget(Database* dtb, QWidget* current);

private slots:

    void on_students_clicked();

    void on_addStudent_clicked();

    void on_closeButton_clicked();

    void on_reports_clicked();

private:
    Ui::MainWindow *ui;
    Database* dtb;
};
#endif // MAINWINDOW_H
