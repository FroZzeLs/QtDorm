/********************************************************************************
** Form generated from reading UI file 'studentswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTSWINDOW_H
#define UI_STUDENTSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Students
{
public:
    QGroupBox *filters;
    QLineEdit *surname;
    QLineEdit *name;
    QLineEdit *patronym;
    QLineEdit *block;
    QPushButton *searchButton;
    QLabel *filtersHeader;
    QLabel *mainHeader;
    QPushButton *closeButton;
    QLabel *label;
    QSpinBox *floorNumber;
    QPushButton *delAll;
    QWidget *widget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *scrollLayout;

    void setupUi(QDialog *Students)
    {
        if (Students->objectName().isEmpty())
            Students->setObjectName("Students");
        Students->resize(1171, 739);
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        Students->setFont(font);
        Students->setCursor(QCursor(Qt::ArrowCursor));
        filters = new QGroupBox(Students);
        filters->setObjectName("filters");
        filters->setGeometry(QRect(930, 140, 226, 351));
        filters->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #007BFF; /* \320\241\320\270\320\275\320\270\320\271 \321\204\320\276\320\275 \320\264\320\273\321\217 \320\276\320\272\320\275\320\260 */\n"
"    border-radius: 12px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 20px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\276\320\272\320\275\320\260 */\n"
"}"));
        surname = new QLineEdit(filters);
        surname->setObjectName("surname");
        surname->setGeometry(QRect(10, 50, 201, 51));
        surname->setFont(font);
        surname->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF; /* \320\221\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 \320\264\320\273\321\217 \320\277\320\276\320\273\320\265\320\271 \320\262\320\262\320\276\320\264\320\260 */\n"
"    border: 2px solid #0056b3; /* \320\241\320\270\320\275\321\217\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 6px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 10px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    margin: 5px 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\274\320\265\320\266\320\264\321\203 \320\277\320\276\320\273\321\217\320\274\320\270 */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"  "
                        "  border-color: #007BFF; /* \320\246\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 \320\277\321\200\320\270 \321\204\320\276\320\272\321\203\321\201\320\265 */\n"
"}"));
        name = new QLineEdit(filters);
        name->setObjectName("name");
        name->setGeometry(QRect(10, 110, 201, 51));
        name->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF; /* \320\221\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 \320\264\320\273\321\217 \320\277\320\276\320\273\320\265\320\271 \320\262\320\262\320\276\320\264\320\260 */\n"
"    border: 2px solid #0056b3; /* \320\241\320\270\320\275\321\217\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 6px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 10px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    margin: 5px 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\274\320\265\320\266\320\264\321\203 \320\277\320\276\320\273\321\217\320\274\320\270 */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"  "
                        "  border-color: #007BFF; /* \320\246\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 \320\277\321\200\320\270 \321\204\320\276\320\272\321\203\321\201\320\265 */\n"
"}"));
        patronym = new QLineEdit(filters);
        patronym->setObjectName("patronym");
        patronym->setGeometry(QRect(10, 170, 201, 51));
        patronym->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF; /* \320\221\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 \320\264\320\273\321\217 \320\277\320\276\320\273\320\265\320\271 \320\262\320\262\320\276\320\264\320\260 */\n"
"    border: 2px solid #0056b3; /* \320\241\320\270\320\275\321\217\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 6px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 10px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    margin: 5px 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\274\320\265\320\266\320\264\321\203 \320\277\320\276\320\273\321\217\320\274\320\270 */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"  "
                        "  border-color: #007BFF; /* \320\246\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 \320\277\321\200\320\270 \321\204\320\276\320\272\321\203\321\201\320\265 */\n"
"}"));
        block = new QLineEdit(filters);
        block->setObjectName("block");
        block->setGeometry(QRect(10, 230, 201, 51));
        block->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF; /* \320\221\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 \320\264\320\273\321\217 \320\277\320\276\320\273\320\265\320\271 \320\262\320\262\320\276\320\264\320\260 */\n"
"    border: 2px solid #0056b3; /* \320\241\320\270\320\275\321\217\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 6px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 8px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    margin: 5px 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\274\320\265\320\266\320\264\321\203 \320\277\320\276\320\273\321\217\320\274\320\270 */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"   "
                        " border-color: #007BFF; /* \320\246\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 \320\277\321\200\320\270 \321\204\320\276\320\272\321\203\321\201\320\265 */\n"
"}"));
        searchButton = new QPushButton(filters);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(50, 280, 131, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setBold(true);
        searchButton->setFont(font1);
        searchButton->setCursor(QCursor(Qt::PointingHandCursor));
        searchButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0056b3; /* \320\236\321\201\320\275\320\276\320\262\320\275\320\276\320\271 \321\206\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    color: white; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    border: none; /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \321\200\320\260\320\274\320\272\320\270 */\n"
"    border-radius: 8px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 10px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 \320\272\320\275\320\276\320\277"
                        "\320\272\320\270 */\n"
"    font-weight: bold; /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    margin-top: 20px; /* \320\236\321\202\321\201\321\202\321\203\320\277 \321\201\320\262\320\265\321\200\321\205\321\203 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #004085; /* \320\242\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #003366; /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}"));
        filtersHeader = new QLabel(filters);
        filtersHeader->setObjectName("filtersHeader");
        filtersHeader->setGeometry(QRect(30, -10, 151, 61));
        filtersHeader->setFont(font1);
        filtersHeader->setStyleSheet(QString::fromUtf8("color: #FFFFFF;\n"
"font-size: 24px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"font-weight: bold; /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */"));
        mainHeader = new QLabel(Students);
        mainHeader->setObjectName("mainHeader");
        mainHeader->setGeometry(QRect(510, 0, 161, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(26);
        mainHeader->setFont(font2);
        closeButton = new QPushButton(Students);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(1060, 650, 91, 51));
        closeButton->setCursor(QCursor(Qt::PointingHandCursor));
        closeButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0056b3; /* \320\236\321\201\320\275\320\276\320\262\320\275\320\276\320\271 \321\206\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    color: white; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    border: none; /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \321\200\320\260\320\274\320\272\320\270 */\n"
"    border-radius: 8px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 \320\272\320\275\320\276\320\277"
                        "\320\272\320\270 */\n"
"    font-weight: bold; /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    margin-top: 20px; /* \320\236\321\202\321\201\321\202\321\203\320\277 \321\201\320\262\320\265\321\200\321\205\321\203 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #004085; /* \320\242\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: red; /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}"));
        label = new QLabel(Students);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 70, 51, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(16);
        font3.setBold(true);
        label->setFont(font3);
        floorNumber = new QSpinBox(Students);
        floorNumber->setObjectName("floorNumber");
        floorNumber->setGeometry(QRect(80, 70, 51, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Times New Roman")});
        font4.setPointSize(16);
        floorNumber->setFont(font4);
        floorNumber->setCursor(QCursor(Qt::PointingHandCursor));
        floorNumber->setMinimum(1);
        floorNumber->setMaximum(16);
        delAll = new QPushButton(Students);
        delAll->setObjectName("delAll");
        delAll->setGeometry(QRect(940, 500, 201, 61));
        delAll->setCursor(QCursor(Qt::PointingHandCursor));
        delAll->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #DC143C; /* \320\236\321\201\320\275\320\276\320\262\320\275\320\276\320\271 \321\206\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    color: white; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    border: none; /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \321\200\320\260\320\274\320\272\320\270 */\n"
"    border-radius: 8px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 \320\272\320\275\320\276\320\277"
                        "\320\272\320\270 */\n"
"    font-weight: bold; /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    margin-top: 20px; /* \320\236\321\202\321\201\321\202\321\203\320\277 \321\201\320\262\320\265\321\200\321\205\321\203 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #8B0000; /* \320\242\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: red; /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}"));
        widget = new QWidget(Students);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(18, 120, 901, 611));
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 901, 611));
        scrollLayout = new QVBoxLayout(verticalLayoutWidget);
        scrollLayout->setObjectName("scrollLayout");
        scrollLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Students);

        QMetaObject::connectSlotsByName(Students);
    } // setupUi

    void retranslateUi(QDialog *Students)
    {
        Students->setWindowTitle(QCoreApplication::translate("Students", "Dialog", nullptr));
        filters->setTitle(QString());
        surname->setPlaceholderText(QCoreApplication::translate("Students", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        name->setPlaceholderText(QCoreApplication::translate("Students", "\320\230\320\274\321\217", nullptr));
        patronym->setPlaceholderText(QCoreApplication::translate("Students", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        block->setPlaceholderText(QCoreApplication::translate("Students", "\320\235\320\276\320\274\320\265\321\200 \320\261\320\273\320\276\320\272\320\260", nullptr));
        searchButton->setText(QCoreApplication::translate("Students", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        filtersHeader->setText(QCoreApplication::translate("Students", "\320\244\320\270\320\273\321\214\321\202\321\200\321\213", nullptr));
        mainHeader->setText(QCoreApplication::translate("Students", "\320\241\321\202\321\203\320\264\320\265\320\275\321\202\321\213", nullptr));
        closeButton->setText(QCoreApplication::translate("Students", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("Students", "\320\255\321\202\320\260\320\266", nullptr));
        delAll->setText(QCoreApplication::translate("Students", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\201\320\265\321\205 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\276\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Students: public Ui_Students {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTSWINDOW_H
