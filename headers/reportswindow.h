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
    explicit ReportsWindow(Database* db, QWidget *parent = nullptr);
    ~ReportsWindow();

private slots:
    void on_exit_clicked();

private:
    Ui::ReportsWindow *ui;
    Database* dtb;
};

#endif // REPORTSWINDOW_H
