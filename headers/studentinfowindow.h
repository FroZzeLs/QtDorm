#ifndef STUDENTINFOWINDOW_H
#define STUDENTINFOWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include "studentresident.h"
#include "database.h"

namespace Ui {
class StudentInfoWindow;
}

class StudentInfoWindow : public QDialog
{
    Q_OBJECT

public:
    StudentInfoWindow(Database* dtb, const StudentResident& student, QWidget *parent = nullptr);
    StudentInfoWindow();
    ~StudentInfoWindow();

private slots:

    void on_deleteButton_clicked();

    void on_saveButton_clicked();

private:
    Ui::StudentInfoWindow *ui;
    Database* dtb;
    StudentResident student;
    QPushButton* createStyledButton(int type, const QString &text, QWidget *parent);
    void fullSetupUi(const StudentResident &studentData);
};

#endif // STUDENTINFOWINDOW_H
