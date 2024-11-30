#include "createreportwindow.h"
#include "ui_createreportwindow.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>

CreateReportWindow::CreateReportWindow(int type, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CreateReportWindow), type(type)
{
    ui->setupUi(this);
    ui->createReportButton->setEnabled(false);
    ui->createReportButton->setStyleSheet("QPushButton {"
                                 "    background-color: #cccccc;"
                                 "    color: #666666;"
                                 "    border: none;"
                                 "    border-radius: 8px;"
                                 "    padding: 1px;"
                                 "    font-size: 16px;"
                                 "    font-weight: bold;"
                                 "    margin-top: 1px;"
                                 "}");
}

CreateReportWindow::~CreateReportWindow()
{
    delete ui;
}

void CreateReportWindow::on_searchButton_clicked()
{
    studentsForReport = dtb->searchStudents(type, ui->surnameEdit->text(), ui->nameEdit->text(), ui->patronymEdit->text(), ui->blockEdit->text().toInt());
    displayStudentInfo(studentsForReport);
}


void CreateReportWindow::on_createReportButton_clicked()
{
    generateReport(ui->titleEdit->text(), studentsForReport);
}

void CreateReportWindow::displayStudentInfo(const List<StudentResident>& students) {
    QWidget* scrollWidget = new QWidget();
    QVBoxLayout* scrollLayout = new QVBoxLayout(scrollWidget);

    QLayoutItem* item;
    while ((item = scrollLayout->takeAt(0)) != nullptr) {
        QWidget* widget = item->widget();
        if (widget) {
            delete widget;
        }
        delete item;
    }

    for (const auto& student : students) {
        QString studentInfo;

        if (ui->checkSNP->isChecked()) {
            studentInfo += QString("ФИО: %1 %2 %3\n").arg(student.getSurname(), student.getName(), student.getPatronym());
        }

        if (ui->checkBlock->isChecked()) {
            studentInfo += QString("Номер блока: %1\n").arg(student.getBlockNumber());
        }

        if (ui->checkAge->isChecked()) {
            studentInfo += QString("Возраст: %1\n").arg(student.getAge());
        }

        if (ui->checkPhone->isChecked()) {
            studentInfo += QString("Номер телефона: %1\n").arg(student.getPhoneNumber());
        }

        if (ui->checkOpt->isChecked()) {
            studentInfo += QString("Часы ОПТ: %1\n").arg(student.getOpt());
        }

        QLabel* studentLabel = new QLabel(studentInfo);
        scrollLayout->addWidget(studentLabel);
    }

    ui->scrollArea->setWidget(scrollWidget);
    ui->scrollArea->setWidgetResizable(true);
}

void CreateReportWindow::generateReport(const QString &reportTitle, const List<StudentResident> &students) {
    QJsonObject reportJson;
    reportJson["report"] = QJsonObject{{"title", reportTitle}};

    QJsonArray studentsArray;

    for (const auto &student : students) {
        QJsonObject studentJson;

        if (ui->checkSNP->isChecked()) {
            studentJson["fullName"] = QString("%1 %2 %3")
                                          .arg(student.getSurname())
                                          .arg(student.getName())
                                          .arg(student.getPatronym());
        }

        if (ui->checkBlock->isChecked()) {
            studentJson["blockNumber"] = student.getBlockNumber();
        }

        if (ui->checkAge->isChecked()) {
            studentJson["age"] = student.getAge();
        }

        if (ui->checkPhone->isChecked()) {
            studentJson["phoneNumber"] = student.getPhoneNumber();
        }

        if (ui->checkOpt->isChecked()) {
            studentJson["optHours"] = student.getOpt();
        }

        if (!studentJson.isEmpty()) {
            studentsArray.append(studentJson);
        }
    }

    reportJson["students"] = studentsArray;

    QString fileName = QFileDialog::getSaveFileName(this, tr("Сохранить отчет"), "", tr("JSON Files (*.json)"));
    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (file.open(QIODevice::WriteOnly)) {
            QJsonDocument jsonDoc(reportJson);
            file.write(jsonDoc.toJson());
            file.close();
            QMessageBox::information(this, tr("Успех"), tr("Отчет успешно сохранен!"));
        } else {
            QMessageBox::warning(this, tr("Ошибка"), tr("Не удалось сохранить файл."));
        }
    }
    close();
}

void CreateReportWindow::updateReportButtonState() {
    ui->createReportButton->setEnabled(!ui->titleEdit->text().isEmpty() && hasTextInScrollArea());
    if(!(ui->titleEdit->text().isEmpty() && !hasTextInScrollArea())){
        ui->createReportButton->setStyleSheet("QPushButton {"
                                     "    background-color: #0056b3;"
                                     "    color: white;"
                                     "    border: none;"
                                     "    border-radius: 8px;"
                                     "    padding: 1px;"
                                     "    font-size: 16px;"
                                     "    font-weight: bold;"
                                     "    margin-top: 1px;"
                                     "}"
                                     "QPushButton:hover {"
                                     "    background-color: #004085;"
                                     "}"
                                     "QPushButton:pressed {"
                                     "    background-color: #003366;"
                                     "}"
                                     "QPushButton:disabled {"
                                     "    background-color: #cccccc;"
                                     "    color: #666666;"
                                     "}");
    }
}

bool CreateReportWindow::hasTextInScrollArea() const {
    QVBoxLayout* scrollLayout = qobject_cast<QVBoxLayout*>(ui->scrollArea->widget()->layout());
    if (!scrollLayout) {
        return false;
    }

    for (int i = 0; i < scrollLayout->count(); ++i) {
        QLayoutItem* item = scrollLayout->itemAt(i);
        if (item) {
            QWidget* widget = item->widget();
            if (widget && qobject_cast<QLabel*>(widget)) {
                return true;
            }
        }
    }

    return false;
}

void CreateReportWindow::on_titleEdit_textChanged(const QString &arg1)
{
    updateReportButtonState();
}

