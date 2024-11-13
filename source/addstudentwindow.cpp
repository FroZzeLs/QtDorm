#include "./../headers/addstudentwindow.h"
#include "ui_addstudentwindow.h"
#include "./../headers/studentresident.h"

AddStudentWindow::AddStudentWindow(Database* db, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddStudent), dtb(db){
    ui->setupUi(this);
    ui->activityType->setEditable(false);
    ui->optEdit->setEnabled(true);
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
    }
    else{
        opt = ui->optEdit->text().toInt();
    }
    if (surname.isEmpty() || name.isEmpty()){
        QMessageBox::warning(this, "Ошибка", "Не удалось добавить студента. Неверно введены данные.");
        return;
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
}

