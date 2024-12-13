#ifndef CREATEREPORTWIDGET_H
#define CREATEREPORTWIDGET_H

#include <QWidget>
#include "database.h"
#include "list.h"

namespace Ui {
class CreateReportWidget;
}

class CreateReportWidget : public QWidget
{
    Q_OBJECT

public:
    CreateReportWidget(int type, QWidget *parent = nullptr);
    ~CreateReportWidget();
    void displayStudentInfo();
    void generateReport();

private slots:
    void on_searchButton_clicked();

    void on_createReportButton_clicked();

private:
    Ui::CreateReportWidget *ui;
    Database *dtb;
    List<StudentResident> studentsForReport;
    int type;
    void updateReportButtonState();
    bool hasTextForReport() const;
};

#endif // CREATEREPORTWIDGET_H
