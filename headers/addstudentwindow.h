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

    void on_surnameEdit_textChanged(const QString &arg1);

    void on_nameEdit_textChanged(const QString &arg1);

    void on_phoneNumberEdit_textChanged(const QString &arg1);

    void on_ageEdit_textChanged(const QString &arg1);

    void on_blockEdit_textChanged(const QString &arg1);

    void on_optEdit_textChanged(const QString &arg1);

private:
    Ui::AddStudent *ui;
    Database* dtb;
    bool allFilled(int activityType);
    void updateAddButtonState(int activityType);
    void fullSetupUi();
};

#endif // ADDSTUDENTWINDOW_H
