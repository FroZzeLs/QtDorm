#ifndef ADDSTUDENTWINDOW_H
#define ADDSTUDENTWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include "database.h"

namespace Ui {
class AddStudent;
}

class AddStudentWindow : public QDialog
{
    Q_OBJECT

public:
    AddStudentWindow(Database* db, QWidget *parent = nullptr);
    ~AddStudentWindow();

private slots:
    void on_addButton_clicked();

    void on_activityType_currentIndexChanged(int index);

private:
    Ui::AddStudent *ui;
    Database* dtb;
};

#endif // ADDSTUDENTWINDOW_H
