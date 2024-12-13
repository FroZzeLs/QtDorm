#ifndef ACTIVITYWINDOW_H
#define ACTIVITYWINDOW_H

#include <QDialog>
#include <QVBoxLayout>
#include <QSpinBox>
#include <QLabel>
#include <QString>
#include <QPushButton>
#include "studentresident.h"
#include "database.h"

class ActivityWindow : public QDialog {
    Q_OBJECT

public:
    ActivityWindow(Database* db, const StudentResident& student, QWidget *parent);
    void initializeActivity();
    void saveChanges();

protected:
    virtual void displayActivity() = 0;

    QSpinBox *spinBox;
    QLabel *activityLabel;
    QPushButton *saveButton;
    StudentResident student;
    Database* dtb;


    void setupUi();
};

#endif // ACTIVITYWINDOW_H
