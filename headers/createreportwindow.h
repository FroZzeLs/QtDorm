#ifndef CREATEREPORTWINDOW_H
#define CREATEREPORTWINDOW_H

#include <QDialog>
#include "database.h"
#include "list.h"

namespace Ui {
class CreateReportWindow;
}

class CreateReportWindow : public QDialog
{
    Q_OBJECT

public:
    CreateReportWindow(int type, QWidget *parent = nullptr);
    ~CreateReportWindow();
    void displayStudentInfo(const List<StudentResident>& students);
    void generateReport(const QString &reportTitle, const List<StudentResident> &students);

private slots:
    void on_searchButton_clicked();

    void on_createReportButton_clicked();

    void on_titleEdit_textChanged(const QString &arg1);

private:
    Ui::CreateReportWindow *ui;
    Database *dtb;
    List<StudentResident> studentsForReport;
    int type;
    void updateReportButtonState();
    bool hasTextInScrollArea() const;
};

#endif // CREATEREPORTWINDOW_H
