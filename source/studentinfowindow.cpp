#include "./../headers/studentinfowindow.h"
#include "./../headers/councilactivitywindow.h"
#include "./../headers/voluntarysquadwindow.h"
#include "./../headers/validateinput.h"
#include "./../headers/invalidnameexception.h"
#include "./../headers/invalidnumberexception.h"
#include "./../headers/invalidphonenumberexception.h"
#include "ui_studentinfowindow.h"


StudentInfoWindow::StudentInfoWindow(Database* dtb, const StudentResident &studentData, QWidget *parent)
    : dtb(dtb), student(studentData), QDialog(parent)
    , ui(new Ui::StudentInfoWindow)
{
    fullSetupUi(studentData);
}

void StudentInfoWindow::fullSetupUi(const StudentResident &studentData){
    ui->setupUi(this);
    ui->surnameEdit->setText(studentData.getSurname());
    ui->nameEdit->setText(studentData.getName());
    ui->patronymEdit->setText(studentData.getPatronym());
    ui->phoneEdit->setText(studentData.getPhoneNumber());
    ui->ageEdit->setText(QString::number(studentData.getAge()));
    ui->blockEdit->setText(QString::number(studentData.getBlockNumber()));
    ui->activityType->addItem("Не активист", 0);
    ui->activityType->addItem("Член студсовета", 1);
    ui->activityType->addItem("Член ДД", 2);
    int activityTypeValue = studentData.getStudActive();
    ui->activityType->setCurrentIndex(activityTypeValue);
    if(activityTypeValue == 1){
        createStyledButton(1, "Показать активность", this);
    }
    else if(activityTypeValue == 2){
        createStyledButton(2, "Показать обходы", this);
    }
    ui->optEdit->setText(QString::number(studentData.getOpt()));
}

StudentInfoWindow::StudentInfoWindow() {}

StudentInfoWindow::~StudentInfoWindow()
{
    delete ui;
}

void StudentInfoWindow::on_deleteButton_clicked()
{
    if (dtb->removeStudent(student.getId())) {
        QMessageBox::information(this, "Успех", "Студент успешно удалён!");
        this->close();
    } else {
        QMessageBox::warning(this, "Ошибка", "Не удалось удалить студента.");
    }
    delete this;
}

void StudentInfoWindow::on_saveButton_clicked()
{
    QString surname = ui->surnameEdit->text();
    QString name = ui->nameEdit->text();
    QString patronym = ui->patronymEdit->text();
    QString phoneNumber = ui->phoneEdit->text();
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

    StudentResident newInfo(-1, surname, name, patronym, phoneNumber, age, blockNumber, studActive, opt);
    if(!(student == newInfo)){
    if (dtb->updateStudent(student, newInfo)) {
        QMessageBox::information(this, "Успех", "Данные успешно обновлены!");
        this->close();
    } else {
        QMessageBox::warning(this, "Ошибка", "Не удалось обновить данные:(");
    }
    }
    delete this;
}

QPushButton* StudentInfoWindow::createStyledButton(int type, const QString &text, QWidget *parent) {
    QPushButton *button = new QPushButton(text, parent);
    button->setStyleSheet(R"(
        QPushButton {
            background-color: #0056b3;
            color: white;
            border: none;
            border-radius: 8px;
            padding: 5px;
            font-size: 16px;
            font-weight: bold;
            margin: 5px 0;
        }
        QPushButton:hover {
            background-color: #004085;
        }
    )");

    button->setGeometry(190, 280, 181, 41);

    connect(button, &QPushButton::clicked, [type, parent]() {
        if (type == 1) {
            CouncilActivityWindow *councilWindow = new CouncilActivityWindow();
            councilWindow->initializeActivity();
            councilWindow->show();

        } else if (type == 2) {
            VoluntarySquadWindow *squadWindow = new VoluntarySquadWindow();
            squadWindow->initializeActivity();
            squadWindow->show();
        }
    });

    button->show();
    return button;
}

