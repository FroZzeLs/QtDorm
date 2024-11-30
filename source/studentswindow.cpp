#include "./../headers/studentswindow.h"
#include "ui_studentswindow.h"
#include "./../headers/studentinfowindow.h"
#include <QFormLayout>
#include <QScrollArea>

Students::Students(Database* db, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Students), dtb(db)
{
    ui->setupUi(this);
    scrollArea = createScrollArea();
    displayStudents(dtb->searchStudents(1), scrollArea);
}

Students::~Students()
{
    delete ui;
}

void Students::on_delAll_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Подтверждение удаления",
                                  "Вы действительно хотите удалить всех студентов?",
                                  QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        if (dtb->deleteAllData()) {
            QMessageBox::information(this, "Успех", "Все студенты успешно удалены!");
        } else {
            QMessageBox::warning(this, "Ошибка", "Не удалось удалить студентов.");
        }
    } else {
        QMessageBox::information(this, "Отмена", "Удаление студентов отменено.");
    }
}

void Students::displayStudents(const List<StudentResident> students, QScrollArea *scrollArea) {
    QWidget *buttonContainer = scrollArea->widget();

    QLayoutItem *item;
    while ((item = buttonContainer->layout()->takeAt(0)) != nullptr) {
        delete item->widget();
        delete item;
    }

    int buttonHeight = 61;

    QVBoxLayout *vLayout = qobject_cast<QVBoxLayout*>(buttonContainer->layout());
    for (const StudentResident &student : students) {
        QPushButton *button = new QPushButton(buttonContainer);
        button->setFixedHeight(buttonHeight);

        QString fioText = QString("%1 %2 %3")
                              .arg(student.getSurname())
                              .arg(student.getName())
                              .arg(student.getPatronym());
        QString blockNumberText = QString::number(student.getBlockNumber());

        button->setStyleSheet(
            "QPushButton {"
            "    background-color: #0056b3;"
            "    color: white;"
            "    border: none;"
            "    border-radius: 8px;"
            "    padding: 10px;"
            "    font-size: 16px;"
            "    font-weight: bold;"
            "    margin: 5px 0;"
            "}"
            "QPushButton:hover {"
            "    background-color: #004085;"
            "}"
            "QPushButton:pressed {"
            "    background-color: #003366;"
            "}"
            );

        QHBoxLayout *hLayout = new QHBoxLayout(button);
        hLayout->setContentsMargins(10, 0, 10, 0);
        hLayout->setSpacing(0);

        QLabel *fioLabel = new QLabel(fioText, button);
        fioLabel->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
        fioLabel->setStyleSheet("QLabel { color: white; background: none; }");
        hLayout->addWidget(fioLabel);

        hLayout->addStretch();

        QLabel *blockLabel = new QLabel(blockNumberText, button);
        blockLabel->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
        blockLabel->setStyleSheet("QLabel { color: white; background: none; }");
        hLayout->addWidget(blockLabel);

        button->setLayout(hLayout);

        connect(button, &QPushButton::clicked, this, [this, student]() {
            showStudentDetails(student);
        });

        vLayout->addWidget(button);
    }

    vLayout->addStretch();
}

void Students::showStudentDetails(StudentResident student){
    StudentInfoWindow *information;
    information = new StudentInfoWindow(dtb, student, this);
    information->show();
}

void Students::on_searchButton_clicked()
{
    displayStudents(dtb->searchStudents(0, ui->surname->text(), ui->name->text(), ui->patronym->text(), ui->block->text().toInt()), scrollArea);
}


void Students::on_closeButton_clicked()
{
    delete this;
}

QScrollArea* Students::createScrollArea() {
    QScrollArea *scrollArea = new QScrollArea(this);
    scrollArea->setWidgetResizable(true);

    QWidget *buttonContainer = new QWidget(scrollArea);
    scrollArea->setWidget(buttonContainer);

    buttonContainer->setFixedWidth(881);
    buttonContainer->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);

    QVBoxLayout *vLayout = new QVBoxLayout(buttonContainer);
    buttonContainer->setLayout(vLayout);

    scrollArea->setStyleSheet(R"(
        QScrollArea {
            border: 2px solid blue;
            border-radius: 5px;
            background-color: #f0f8ff;
        }
        QScrollBar:vertical {
            border: 2px solid blue;
            background: #f0f8ff;
            width: 12px;
            margin: 22px 0;
        }
        QScrollBar::handle:vertical {
            background: blue;
            border-radius: 5px;
        }
        QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {
            background: none;
        }
        QScrollBar::slider:vertical {
            background: blue;
            border-radius: 5px;
        }
    )");

    ui->scrollLayout->addWidget(scrollArea);

    return scrollArea;
}

void Students::on_floorNumber_valueChanged(int arg1)
{
    ui->surname->clear();
    ui->name->clear();
    ui->patronym->clear();
    ui->block->clear();
    displayStudents(dtb->searchStudents(arg1), scrollArea);
}

