#ifndef REPORTSWINDOW_H
#define REPORTSWINDOW_H

#include <QDialog>

namespace Ui {
class ReportsWindow;
}

class ReportsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ReportsWindow(QWidget *parent = nullptr);
    ~ReportsWindow();

private slots:
    void on_exit_clicked();

private:
    Ui::ReportsWindow *ui;
};

#endif // REPORTSWINDOW_H
