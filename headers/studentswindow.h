#ifndef STUDENTSWINDOW_H
#define STUDENTSWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include <QScrollArea>
#include "database.h"

namespace Ui {
class Students;
}

class Students : public QDialog
{
    Q_OBJECT

public:
    Students(Database* db, QWidget *parent = nullptr);
    ~Students();

private slots:
    void on_delAll_clicked();
    void showStudentDetails(StudentResident student);

    void on_searchButton_clicked();

    void on_closeButton_clicked();

    void on_floorNumber_valueChanged(int arg1);

private:
    Ui::Students *ui;
    Database* dtb;
    QScrollArea* scrollArea;
    void displayStudents(const QList<StudentResident> students, QScrollArea *scrollArea);
    QScrollArea* createScrollArea();
};

#endif // STUDENTSWINDOW_H
