#include "./../headers/reportswindow.h"
#include "ui_reportswindow.h"
#include "./../headers/createreportwidget.h"

ReportsWindow::ReportsWindow(Database* db, QPushButton* lastClicked, QWidget *parent)
    : dtb(db), lastClickedButton(lastClicked), QDialog(parent)
    , ui(new Ui::ReportsWindow)
{
    ui->setupUi(this);
}

ReportsWindow::~ReportsWindow()
{
    delete ui;
}

void ReportsWindow::on_exit_clicked()
{
    delete this;
}

void ReportsWindow::on_allStudents_clicked()
{
    defaultShowWidget(0, this);
    changeButtonColor(ui->allStudents);
}

void ReportsWindow::on_debtors_clicked()
{
    defaultShowWidget(1, this);
    changeButtonColor(ui->debtors);
}


void ReportsWindow::on_studentCouncil_clicked()
{
    defaultShowWidget(2, this);
    changeButtonColor(ui->studentCouncil);
}


void ReportsWindow::on_dd_clicked()
{
    defaultShowWidget(3, this);
    changeButtonColor(ui->dd);
}

void ReportsWindow::changeButtonColor(QPushButton *button) {
    if (lastClickedButton && lastClickedButton != button) {
        lastClickedButton->setStyleSheet(R"(
            QPushButton {
                background-color: #0056b3; /* Основной цвет фона кнопки */
                color: white; /* Цвет текста кнопки */
                border: none; /* Убираем рамки */
                border-radius: 18px; /* Закругленные углы */
                padding: 10px; /* Отступы внутри кнопки */
                font-size: 22px; /* Размер шрифта кнопки */
                font-weight: bold; /* Жирный текст */
                margin: 5px 0; /* Отступы между кнопками */
            }

            QPushButton:hover {
                background-color: #004085; /* Цвет при наведении */
            }

            QPushButton:pressed {
                background-color: #003366; /* Цвет при нажатии */
            }
        )");
    }

    button->setStyleSheet(R"(
            QPushButton {
                background-color: #191970; /* Основной цвет фона кнопки */
                color: white; /* Цвет текста кнопки */
                border: none; /* Убираем рамки */
                border-radius: 18px; /* Закругленные углы */
                padding: 10px; /* Отступы внутри кнопки */
                font-size: 22px; /* Размер шрифта кнопки */
                font-weight: bold; /* Жирный текст */
                margin: 5px 0; /* Отступы между кнопками */
            }

            QPushButton:hover {
                background-color: #004085; /* Цвет при наведении */
            }

            QPushButton:pressed {
                background-color: #003366; /* Цвет при нажатии */
            }
        )");

    lastClickedButton = button;
}

void ReportsWindow::defaultShowWidget(int type, QWidget* current) {
    QLayoutItem* item;
    while ((item = ui->workLayout->takeAt(0))) {
        delete item->widget();
        delete item;
    }

    CreateReportWidget* window = new CreateReportWidget(type, current);
    ui->workLayout->addWidget(window);
    window->show();
}

