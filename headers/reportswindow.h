#ifndef REPORTSWINDOW_H
#define REPORTSWINDOW_H

#include <QDialog>
#include "database.h"

namespace Ui {
class ReportsWindow;
}

class ReportsWindow : public QDialog
{
    Q_OBJECT

public:
    ReportsWindow(Database* db, QPushButton* lstClicked, QWidget *parent = nullptr);
    ~ReportsWindow();

    void defaultShowWidget(int type, QWidget* current);

private slots:
    void on_exit_clicked();

    void on_allStudents_clicked();

    void on_debtors_clicked();

    void on_studentCouncil_clicked();

    void on_dd_clicked();

private:
    Ui::ReportsWindow *ui;
    Database* dtb;
    QPushButton* lastClickedButton;
    void changeButtonColor(QPushButton *button);
};

#endif // REPORTSWINDOW_H
