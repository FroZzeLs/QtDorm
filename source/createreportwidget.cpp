#include "./../headers/createreportwidget.h"
#include "ui_createreportwidget.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>

CreateReportWidget::CreateReportWidget(int type, QWidget *parent)
    : type(type), QWidget(parent)
    , ui(new Ui::CreateReportWidget)
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

CreateReportWidget::~CreateReportWidget()
{
    delete ui;
}

void CreateReportWidget::on_searchButton_clicked()
{
    studentsForReport = dtb->searchStudents(type, ui->surnameEdit_2->text(), ui->nameEdit_2->text(), ui->patronymEdit_2->text(), ui->blockEdit_2->text().toInt());
    displayStudentInfo();
    updateReportButtonState();
}


void CreateReportWidget::on_createReportButton_clicked()
{
     generateReport();
}

void CreateReportWidget::displayStudentInfo() {
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

    for (const auto& student : studentsForReport) {
        QString studentInfo;

        if (ui->checkSNP_2->isChecked()) {
            studentInfo += QString("ФИО: %1 %2 %3\n").arg(student.getSurname(), student.getName(), student.getPatronym());
        }

        if (ui->checkBlock_2->isChecked()) {
            studentInfo += QString("Номер блока: %1\n").arg(student.getBlockNumber());
        }

        if (ui->checkAge_2->isChecked()) {
            studentInfo += QString("Возраст: %1\n").arg(student.getAge());
        }

        if (ui->checkPhone_2->isChecked()) {
            studentInfo += QString("Номер телефона: %1\n").arg(student.getPhoneNumber());
        }

        if (ui->checkOpt_2->isChecked()) {
            studentInfo += QString("Часы ОПТ: %1\n").arg(student.getOpt());
        }

        QLabel* studentLabel = new QLabel(studentInfo);
        scrollLayout->addWidget(studentLabel);
    }

    ui->scrollArea->setWidget(scrollWidget);
    ui->scrollArea->setWidgetResizable(true);
}

void CreateReportWidget::generateReport() {
    QJsonObject reportJson;
    QJsonArray studentsArray;

    for (const auto &student : studentsForReport) {
        QJsonObject studentJson;

        if (ui->checkSNP_2->isChecked()) {
            studentJson["fullName"] = QString("%1 %2 %3")
                                          .arg(student.getSurname())
                                          .arg(student.getName())
                                          .arg(student.getPatronym());
        }

        if (ui->checkBlock_2->isChecked()) {
            studentJson["blockNumber"] = student.getBlockNumber();
        }

        if (ui->checkAge_2->isChecked()) {
            studentJson["age"] = student.getAge();
        }

        if (ui->checkPhone_2->isChecked()) {
            studentJson["phoneNumber"] = student.getPhoneNumber();
        }

        if (ui->checkOpt_2->isChecked()) {
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

void CreateReportWidget::updateReportButtonState() {
    ui->createReportButton->setEnabled(hasTextForReport());
    if(hasTextForReport()){
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

bool CreateReportWidget::hasTextForReport() const {
    if(!studentsForReport.empty() && (ui->checkAge_2->isChecked() || ui->checkBlock_2->isChecked()
                                       || ui->checkSNP_2->isChecked() || ui->checkPhone_2->isChecked())){
        return true;
    }
    return false;
}

