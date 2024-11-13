#include "./../headers/activitywindow.h"

ActivityWindow::ActivityWindow(QWidget *parent) : QWidget(parent) {
    setupUI();
}

void ActivityWindow::setupUI() {
    QVBoxLayout *layout = new QVBoxLayout(this);

    spinBox = new QSpinBox(this);
    spinBox->setMinimum(0);

    activityLabel = new QLabel(this);
    activityLabel->setStyleSheet("font-size: 18px; color: white; font-weight: bold;");

    saveButton = new QPushButton("Сохранить и выйти", this);
    saveButton->setStyleSheet("font-size: 14px; color: white; background-color: #FF4500;"
                              "border-radius: 3px; font-weight: bold;");
    layout->addWidget(activityLabel);
    layout->addWidget(spinBox);
    layout->addWidget(saveButton);
    connect(saveButton, &QPushButton::clicked, this, &QWidget::close);

    setStyleSheet(R"(
        ActivityWindow {
            width: 500px;
            height: 300px;
            background-color: #0072C6;
            color: white;
            padding: 20px;
            border-radius: 5px;
            font-family: Arial, sans-serif;
        }
        QLabel, QSpinBox, QPushButton {
            width: 100%;
            padding: 15px;
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
