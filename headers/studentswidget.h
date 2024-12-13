#ifndef STUDENTSWIDGET_H
#define STUDENTSWIDGET_H

#include <QWidget>
#include <QMessageBox>
#include <QScrollArea>
#include "database.h"

namespace Ui {
class StudentsWidget;
}

class StudentsWidget : public QWidget
{
    Q_OBJECT

public:
    StudentsWidget(Database* db, QWidget *parent = nullptr);
    ~StudentsWidget();

private slots:
    void on_floorNumber_valueChanged(int arg1);

    void on_searchButton_clicked();

    void on_delAll_clicked();

private:
    Ui::StudentsWidget *ui;
    Database* dtb;
    QScrollArea* scrollArea;
    QScrollArea* createScrollArea();
    void displayStudents(const List<StudentResident> students, QScrollArea *scrollArea);
    void showStudentDetails(StudentResident student);
};

#endif // STUDENTSWIDGET_H
