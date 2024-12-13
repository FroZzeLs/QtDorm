#include "./../headers/activitywindow.h"
#include "./../headers/studentcouncilmanager.h"
#include "./../headers/voluntarysquadmanager.h"

ActivityWindow::ActivityWindow(Database* db, const StudentResident& student, QWidget *parent) : QDialog(parent), student(student), dtb(db) {
    setupUi();
}

void ActivityWindow::setupUi() {
    QVBoxLayout *layout = new QVBoxLayout(this);

    spinBox = new QSpinBox(this);
    spinBox->setMinimum(0);
    int eventsAmount = 0;
    if(student.getStudActive() == 1){
        StudentCouncilManager dbManager(dtb, student.getId());
        eventsAmount = dbManager.selectEvents();
    }
    else if(student.getStudActive() == 2){
        VoluntarySquadManager dbManager(dtb, student.getId());
        eventsAmount = dbManager.selectRounds();
    }
    spinBox->setValue(eventsAmount);

    activityLabel = new QLabel(this);
    activityLabel->setStyleSheet("font-size: 18px; color: white; background-color: #0072C6; font-weight: bold;");

    saveButton = new QPushButton("Сохранить и выйти", this);
    saveButton->setStyleSheet("font-size: 18px; color: white; background-color: #FF4500;"
                              "border-radius: 3px; font-weight: bold;");
    layout->addWidget(activityLabel);
    layout->addWidget(spinBox);
    layout->addWidget(saveButton);
    connect(saveButton, &QPushButton::clicked, this, &ActivityWindow::saveChanges);

    setStyleSheet(R"(
        ActivityWindow {
            width: 500px;
            height: 300px;
            background-color: #0072C6;
            padding: 20px;
            border-radius: 5px;
            font-family: Arial, sans-serif;
        }
        QLabel, QSpinBox, QPushButton {
            width: 100%;
            padding: 5px;
            margin-bottom: 20px;
            border-radius: 3px;
            border: none;
            font-size: 16px;
        }
        QPushButton {
            background-color: #FF4500;
            color: white;
        }
        QPushButton:hover {
            background-color: #FF6347;
        }
    )");
}

void ActivityWindow::initializeActivity(){
    displayActivity();
}

void ActivityWindow::saveChanges(){
    if(student.getStudActive() == 1){
        StudentCouncilManager dbManager(dtb, student.getId());
        dbManager.updateEvents(spinBox->value());
    }
    else if(student.getStudActive() == 2){
        VoluntarySquadManager dbManager(dtb, student.getId());
        dbManager.updateRounds(spinBox->value());
    }
    close();
}
