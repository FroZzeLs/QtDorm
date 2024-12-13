#ifndef ADDSTUDENTWIDGET_H
#define ADDSTUDENTWIDGET_H

#include <QWidget>
#include <QMessageBox>
#include "database.h"

namespace Ui {
class AddStudentWidget;
}

class AddStudentWidget : public QWidget
{
    Q_OBJECT

public:
    AddStudentWidget(Database* db, QWidget *parent = nullptr);
    ~AddStudentWidget();

private slots:
    void on_surnameEdit_textChanged(const QString &arg1);

    void on_nameEdit_textChanged(const QString &arg1);

    void on_patronymEdit_textChanged(const QString &arg1);

    void on_phoneNumberEdit_textChanged(const QString &arg1);

    void on_ageEdit_textChanged(const QString &arg1);

    void on_blockEdit_textChanged(const QString &arg1);

    void on_activityType_currentIndexChanged(int index);

    void on_optEdit_textChanged(const QString &arg1);

    void on_addButton_clicked();

private:
    Ui::AddStudentWidget *ui;
    Database* dtb;
    bool allFilled(int activityType);
    void updateAddButtonState(int activityType);
    void fullSetupUi();
};

#endif // ADDSTUDENTWIDGET_H
