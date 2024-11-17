#include "./../headers/addstudentwindow.h"
#include "ui_addstudentwindow.h"
#include "./../headers/studentresident.h"
#include "./../headers/validateinput.h"
#include "./../headers/invalidnameexception.h"
#include "./../headers/invalidnumberexception.h"
#include "./../headers/invalidphonenumberexception.h"

AddStudentWindow::AddStudentWindow(Database* db, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddStudent), dtb(db){
    fullSetupUi();
}

void AddStudentWindow::fullSetupUi(){
    ui->setupUi(this);
    ui->activityType->addItem("Не активист");
    ui->activityType->addItem("Член Студсовета");
    ui->activityType->addItem("Член ДД");
    ui->activityType->setEditable(false);
    ui->optEdit->setEnabled(true);
    ui->addButton->setEnabled(false);
    ui->addButton->setStyleSheet("QPushButton {"
                                 "    background-color: #cccccc;"
                                 "    color: #666666;"
                                 "    border: none;"
                                 "    border-radius: 8px;"
                                 "    padding: 10px;"
                                 "    font-size: 16px;"
                                 "    font-weight: bold;"
                                 "    margin-top: 20px;"
                                 "}");
    connect(ui->activityType, SIGNAL(currentIndexChanged(int)), this, SLOT(on_activityType_currentIndexChanged(int)));

}

AddStudentWindow::~AddStudentWindow()
{
    delete ui;
}

void AddStudentWindow::on_addButton_clicked()
{   
    QString surname = ui->surnameEdit->text();
    QString name = ui->nameEdit->text();
    QString patronym = ui->patronymEdit->text();
    QString phoneNumber = ui->phoneNumberEdit->text();
    int age = ui->ageEdit->text().toInt();
    int blockNumber = ui->blockEdit->text().toInt();
    int studActive = ui->activityType->currentIndex();
    int opt;
    if(studActive != 0){
        opt = 36;
        try{
            validateInput(surname, name, patronym, phoneNumber, ui->ageEdit->text(),
                          ui->blockEdit->text());
        } catch (const InvalidNameException& exception) {
            QMessageBox::warning(this, "Ошибка ввода", exception.what());
            return;
        } catch (const InvalidPhoneNumberException& exception) {
            QMessageBox::warning(this, "Ошибка ввода", exception.what());
            return;
        } catch (const InvalidNumberException& exception) {
            QMessageBox::warning(this, "Ошибка ввода", exception.what());
            return;
        }
    }
    else{
        opt = ui->optEdit->text().toInt();
        try{
            validateInput(surname, name, patronym, phoneNumber, ui->ageEdit->text(),
                          ui->blockEdit->text(), ui->optEdit->text());
        } catch (const InvalidNameException& exception) {
            QMessageBox::warning(this, "Ошибка ввода", exception.what());
            return;
        } catch (const InvalidPhoneNumberException& exception) {
            QMessageBox::warning(this, "Ошибка ввода", exception.what());
            return;
        } catch (const InvalidNumberException& exception) {
            QMessageBox::warning(this, "Ошибка ввода", exception.what());
            return;
        }
    }

    StudentResident temp(-1, surname, name, patronym, phoneNumber, age, blockNumber, studActive, opt);
    if (dtb->addStudent(temp)) {
        QMessageBox::information(this, "Успех", "Студент успешно добавлен!");
        this->close();
    } else {
        QMessageBox::warning(this, "Ошибка", "Не удалось добавить студента.");
    }
    delete this;
}

void AddStudentWindow::on_activityType_currentIndexChanged(int index)
{
    if(index != 0){
        ui->optEdit->setEnabled(false);
    }
    else{
        ui->optEdit->setEnabled(true);
    }
    updateAddButtonState(index);
}

bool AddStudentWindow::allFilled(int activityType){
    bool success;
    if(activityType == 0){
    success = !ui->surnameEdit->text().isEmpty() &&
                   !ui->nameEdit->text().isEmpty() &&
                   !ui->phoneNumberEdit->text().isEmpty() &&
                   !ui->ageEdit->text().isEmpty() &&
                   !ui->blockEdit->text().isEmpty() &&
                   !ui->optEdit->text().isEmpty();
    }
    else{
        success = !ui->surnameEdit->text().isEmpty() &&
                  !ui->nameEdit->text().isEmpty() &&
                  !ui->phoneNumberEdit->text().isEmpty() &&
                  !ui->ageEdit->text().isEmpty() &&
                  !ui->blockEdit->text().isEmpty();
    }
    return success;
}

void AddStudentWindow::updateAddButtonState(int activityType) {
    ui->addButton->setEnabled(allFilled(activityType));
    if(allFilled(activityType)){
        ui->addButton->setStyleSheet("QPushButton {"
                                     "    background-color: #0056b3;"
                                     "    color: white;"
                                     "    border: none;"
                                     "    border-radius: 8px;"
                                     "    padding: 10px;"
                                     "    font-size: 16px;"
                                     "    font-weight: bold;"
                                     "    margin-top: 20px;"
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

void AddStudentWindow::on_surnameEdit_textChanged(const QString &arg1) {
    updateAddButtonState(ui->activityType->currentIndex());
}

void AddStudentWindow::on_nameEdit_textChanged(const QString &arg1) {
    updateAddButtonState(ui->activityType->currentIndex());
}

void AddStudentWindow::on_phoneNumberEdit_textChanged(const QString &arg1) {
    updateAddButtonState(ui->activityType->currentIndex());
}

void AddStudentWindow::on_ageEdit_textChanged(const QString &arg1) {
    updateAddButtonState(ui->activityType->currentIndex());
}

void AddStudentWindow::on_blockEdit_textChanged(const QString &arg1) {
    updateAddButtonState(ui->activityType->currentIndex());
}

void AddStudentWindow::on_optEdit_textChanged(const QString &arg1) {
    updateAddButtonState(ui->activityType->currentIndex());
}

