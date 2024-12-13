/********************************************************************************
** Form generated from reading UI file 'createreportwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEREPORTWINDOW_H
#define UI_CREATEREPORTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateReportWindow
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *patronymEdit;
    QLineEdit *nameEdit;
    QLineEdit *blockEdit;
    QLineEdit *surnameEdit;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkSNP;
    QCheckBox *checkAge;
    QCheckBox *checkPhone;
    QCheckBox *checkBlock;
    QCheckBox *checkOpt;
    QLabel *label_2;
    QPushButton *searchButton;
    QPushButton *createReportButton;

    void setupUi(QDialog *CreateReportWindow)
    {
        if (CreateReportWindow->objectName().isEmpty())
            CreateReportWindow->setObjectName("CreateReportWindow");
        CreateReportWindow->resize(1171, 739);
        groupBox = new QGroupBox(CreateReportWindow);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 321, 351));
        groupBox->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #007BFF; /* \320\241\320\270\320\275\320\270\320\271 \321\204\320\276\320\275 \320\264\320\273\321\217 \320\276\320\272\320\275\320\260 */\n"
"    border-radius: 12px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"}"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 10, 111, 21));
        label->setStyleSheet(QString::fromUtf8("color: #FFFFFF;\n"
"font-size: 24px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"font-weight: bold; /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */"));
        patronymEdit = new QLineEdit(groupBox);
        patronymEdit->setObjectName("patronymEdit");
        patronymEdit->setGeometry(QRect(10, 200, 301, 51));
        patronymEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF; /* \320\221\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 \320\264\320\273\321\217 \320\277\320\276\320\273\320\265\320\271 \320\262\320\262\320\276\320\264\320\260 */\n"
"    border: 2px solid #0056b3; /* \320\241\320\270\320\275\321\217\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 4px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 2px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"    font-size: 18px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #007BFF; /* \320\246\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 \320\277\321\200\320\270 \321\204\320\276\320\272\321\203\321\201\320\265 *"
                        "/\n"
"}"));
        nameEdit = new QLineEdit(groupBox);
        nameEdit->setObjectName("nameEdit");
        nameEdit->setGeometry(QRect(10, 120, 301, 51));
        nameEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF; /* \320\221\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 \320\264\320\273\321\217 \320\277\320\276\320\273\320\265\320\271 \320\262\320\262\320\276\320\264\320\260 */\n"
"    border: 2px solid #0056b3; /* \320\241\320\270\320\275\321\217\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 4px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 2px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"    font-size: 18px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #007BFF; /* \320\246\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 \320\277\321\200\320\270 \321\204\320\276\320\272\321\203\321\201\320\265 *"
                        "/\n"
"}"));
        blockEdit = new QLineEdit(groupBox);
        blockEdit->setObjectName("blockEdit");
        blockEdit->setGeometry(QRect(10, 280, 301, 51));
        blockEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF; /* \320\221\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 \320\264\320\273\321\217 \320\277\320\276\320\273\320\265\320\271 \320\262\320\262\320\276\320\264\320\260 */\n"
"    border: 2px solid #0056b3; /* \320\241\320\270\320\275\321\217\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 4px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 2px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"    font-size: 18px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #007BFF; /* \320\246\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 \320\277\321\200\320\270 \321\204\320\276\320\272\321\203\321\201\320\265 *"
                        "/\n"
"}"));
        surnameEdit = new QLineEdit(groupBox);
        surnameEdit->setObjectName("surnameEdit");
        surnameEdit->setGeometry(QRect(10, 40, 301, 51));
        surnameEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF; /* \320\221\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 \320\264\320\273\321\217 \320\277\320\276\320\273\320\265\320\271 \320\262\320\262\320\276\320\264\320\260 */\n"
"    border: 2px solid #0056b3; /* \320\241\320\270\320\275\321\217\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 4px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 2px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"    font-size: 18px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #007BFF; /* \320\246\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 \320\277\321\200\320\270 \321\204\320\276\320\272\321\203\321\201\320\265 *"
                        "/\n"
"}"));
        scrollArea = new QScrollArea(CreateReportWindow);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(360, 10, 801, 641));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 799, 639));
        scrollArea->setWidget(scrollAreaWidgetContents);
        groupBox_2 = new QGroupBox(CreateReportWindow);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 370, 321, 291));
        groupBox_2->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #007BFF; /* \320\241\320\270\320\275\320\270\320\271 \321\204\320\276\320\275 \320\264\320\273\321\217 \320\276\320\272\320\275\320\260 */\n"
"    border-radius: 12px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"}"));
        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 50, 231, 231));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        checkSNP = new QCheckBox(verticalLayoutWidget);
        checkSNP->setObjectName("checkSNP");
        checkSNP->setCursor(QCursor(Qt::PointingHandCursor));
        checkSNP->setMouseTracking(true);
        checkSNP->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    spacing: 8px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"    border-radius: 4px;\n"
"    background-color: white; /* \320\230\320\267\320\275\320\260\321\207\320\260\320\273\321\214\320\275\320\276 \320\261\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 2px solid #1E90FF; /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \320\264\320\273\321\217 \320\262\320\270\320\264\320\270\320\274\320\276\321\201\321\202\320\270 */\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    background-color: white; /* \320\221\320\265\320\273\321\213\320\271 \321\204\320\276\320\275, \320\272\320\276\320\263\320\264\320\260 \320\275\320\265 \320\262\321\213\320\261\321\200\320\260\320\275 */\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: #00FF00; /* \320\242\321\221\320\274\320\275\320\276-\321\201\320\270\320\275\320\270\320\271"
                        " \321\204\320\276\320\275 \320\277\321\200\320\270 \320\262\321\213\320\261\320\276\321\200\320\265 */\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:pressed {\n"
"    background-color: #000080; /* \320\242\320\265\320\274\320\275\320\276-\321\201\320\270\320\275\320\270\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
"\n"
"QCheckBox::indicator:hover {\n"
"    background-color: #00BFFF; /* \320\241\320\262\320\265\321\202\320\273\320\276-\321\201\320\270\320\275\320\270\320\271 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"/* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\273\320\270\321\210\320\275\320\270\320\265 \321\201\321\202\320\270\320\273\320\270 \320\264\320\273\321\217 \320\263\320\260\320\273\320\276\321\207\320\272\320\270 */\n"
"QCheckBox::indicator:checked {\n"
"    border: 2px solid #1E90FF; /* \320\223\321\200\320\260\320\275\320\270\321"
                        "\206\320\260 \320\277\321\200\320\270 \320\262\321\213\320\261\320\276\321\200\320\265 */\n"
"}"));

        verticalLayout_2->addWidget(checkSNP);

        checkAge = new QCheckBox(verticalLayoutWidget);
        checkAge->setObjectName("checkAge");
        checkAge->setCursor(QCursor(Qt::PointingHandCursor));
        checkAge->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    spacing: 8px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"    border-radius: 4px;\n"
"    background-color: white; /* \320\230\320\267\320\275\320\260\321\207\320\260\320\273\321\214\320\275\320\276 \320\261\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 2px solid #1E90FF; /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \320\264\320\273\321\217 \320\262\320\270\320\264\320\270\320\274\320\276\321\201\321\202\320\270 */\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    background-color: white; /* \320\221\320\265\320\273\321\213\320\271 \321\204\320\276\320\275, \320\272\320\276\320\263\320\264\320\260 \320\275\320\265 \320\262\321\213\320\261\321\200\320\260\320\275 */\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: #00FF00; /* \320\242\321\221\320\274\320\275\320\276-\321\201\320\270\320\275\320\270\320\271"
                        " \321\204\320\276\320\275 \320\277\321\200\320\270 \320\262\321\213\320\261\320\276\321\200\320\265 */\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:pressed {\n"
"    background-color: #000080; /* \320\242\320\265\320\274\320\275\320\276-\321\201\320\270\320\275\320\270\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
"\n"
"QCheckBox::indicator:hover {\n"
"    background-color: #00BFFF; /* \320\241\320\262\320\265\321\202\320\273\320\276-\321\201\320\270\320\275\320\270\320\271 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"/* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\273\320\270\321\210\320\275\320\270\320\265 \321\201\321\202\320\270\320\273\320\270 \320\264\320\273\321\217 \320\263\320\260\320\273\320\276\321\207\320\272\320\270 */\n"
"QCheckBox::indicator:checked {\n"
"    border: 2px solid #1E90FF; /* \320\223\321\200\320\260\320\275\320\270\321"
                        "\206\320\260 \320\277\321\200\320\270 \320\262\321\213\320\261\320\276\321\200\320\265 */\n"
"}"));

        verticalLayout_2->addWidget(checkAge);

        checkPhone = new QCheckBox(verticalLayoutWidget);
        checkPhone->setObjectName("checkPhone");
        checkPhone->setCursor(QCursor(Qt::PointingHandCursor));
        checkPhone->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    spacing: 8px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"    border-radius: 4px;\n"
"    background-color: white; /* \320\230\320\267\320\275\320\260\321\207\320\260\320\273\321\214\320\275\320\276 \320\261\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 2px solid #1E90FF; /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \320\264\320\273\321\217 \320\262\320\270\320\264\320\270\320\274\320\276\321\201\321\202\320\270 */\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    background-color: white; /* \320\221\320\265\320\273\321\213\320\271 \321\204\320\276\320\275, \320\272\320\276\320\263\320\264\320\260 \320\275\320\265 \320\262\321\213\320\261\321\200\320\260\320\275 */\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: #00FF00; /* \320\242\321\221\320\274\320\275\320\276-\321\201\320\270\320\275\320\270\320\271"
                        " \321\204\320\276\320\275 \320\277\321\200\320\270 \320\262\321\213\320\261\320\276\321\200\320\265 */\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:pressed {\n"
"    background-color: #000080; /* \320\242\320\265\320\274\320\275\320\276-\321\201\320\270\320\275\320\270\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
"\n"
"QCheckBox::indicator:hover {\n"
"    background-color: #00BFFF; /* \320\241\320\262\320\265\321\202\320\273\320\276-\321\201\320\270\320\275\320\270\320\271 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"/* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\273\320\270\321\210\320\275\320\270\320\265 \321\201\321\202\320\270\320\273\320\270 \320\264\320\273\321\217 \320\263\320\260\320\273\320\276\321\207\320\272\320\270 */\n"
"QCheckBox::indicator:checked {\n"
"    border: 2px solid #1E90FF; /* \320\223\321\200\320\260\320\275\320\270\321"
                        "\206\320\260 \320\277\321\200\320\270 \320\262\321\213\320\261\320\276\321\200\320\265 */\n"
"}"));

        verticalLayout_2->addWidget(checkPhone);

        checkBlock = new QCheckBox(verticalLayoutWidget);
        checkBlock->setObjectName("checkBlock");
        checkBlock->setCursor(QCursor(Qt::PointingHandCursor));
        checkBlock->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    spacing: 8px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"    border-radius: 4px;\n"
"    background-color: white; /* \320\230\320\267\320\275\320\260\321\207\320\260\320\273\321\214\320\275\320\276 \320\261\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 2px solid #1E90FF; /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \320\264\320\273\321\217 \320\262\320\270\320\264\320\270\320\274\320\276\321\201\321\202\320\270 */\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    background-color: white; /* \320\221\320\265\320\273\321\213\320\271 \321\204\320\276\320\275, \320\272\320\276\320\263\320\264\320\260 \320\275\320\265 \320\262\321\213\320\261\321\200\320\260\320\275 */\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: #00FF00; /* \320\242\321\221\320\274\320\275\320\276-\321\201\320\270\320\275\320\270\320\271"
                        " \321\204\320\276\320\275 \320\277\321\200\320\270 \320\262\321\213\320\261\320\276\321\200\320\265 */\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:pressed {\n"
"    background-color: #000080; /* \320\242\320\265\320\274\320\275\320\276-\321\201\320\270\320\275\320\270\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
"\n"
"QCheckBox::indicator:hover {\n"
"    background-color: #00BFFF; /* \320\241\320\262\320\265\321\202\320\273\320\276-\321\201\320\270\320\275\320\270\320\271 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"/* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\273\320\270\321\210\320\275\320\270\320\265 \321\201\321\202\320\270\320\273\320\270 \320\264\320\273\321\217 \320\263\320\260\320\273\320\276\321\207\320\272\320\270 */\n"
"QCheckBox::indicator:checked {\n"
"    border: 2px solid #1E90FF; /* \320\223\321\200\320\260\320\275\320\270\321"
                        "\206\320\260 \320\277\321\200\320\270 \320\262\321\213\320\261\320\276\321\200\320\265 */\n"
"}"));

        verticalLayout_2->addWidget(checkBlock);

        checkOpt = new QCheckBox(verticalLayoutWidget);
        checkOpt->setObjectName("checkOpt");
        checkOpt->setCursor(QCursor(Qt::PointingHandCursor));
        checkOpt->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    spacing: 8px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"    border-radius: 4px;\n"
"    background-color: white; /* \320\230\320\267\320\275\320\260\321\207\320\260\320\273\321\214\320\275\320\276 \320\261\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 2px solid #1E90FF; /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \320\264\320\273\321\217 \320\262\320\270\320\264\320\270\320\274\320\276\321\201\321\202\320\270 */\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    background-color: white; /* \320\221\320\265\320\273\321\213\320\271 \321\204\320\276\320\275, \320\272\320\276\320\263\320\264\320\260 \320\275\320\265 \320\262\321\213\320\261\321\200\320\260\320\275 */\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: #00FF00; /* \320\242\321\221\320\274\320\275\320\276-\321\201\320\270\320\275\320\270\320\271"
                        " \321\204\320\276\320\275 \320\277\321\200\320\270 \320\262\321\213\320\261\320\276\321\200\320\265 */\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:pressed {\n"
"    background-color: #000080; /* \320\242\320\265\320\274\320\275\320\276-\321\201\320\270\320\275\320\270\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
"\n"
"QCheckBox::indicator:hover {\n"
"    background-color: #00BFFF; /* \320\241\320\262\320\265\321\202\320\273\320\276-\321\201\320\270\320\275\320\270\320\271 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"/* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\273\320\270\321\210\320\275\320\270\320\265 \321\201\321\202\320\270\320\273\320\270 \320\264\320\273\321\217 \320\263\320\260\320\273\320\276\321\207\320\272\320\270 */\n"
"QCheckBox::indicator:checked {\n"
"    border: 2px solid #1E90FF; /* \320\223\321\200\320\260\320\275\320\270\321"
                        "\206\320\260 \320\277\321\200\320\270 \320\262\321\213\320\261\320\276\321\200\320\265 */\n"
"}"));

        verticalLayout_2->addWidget(checkOpt);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 10, 241, 21));
        label_2->setStyleSheet(QString::fromUtf8("color: #FFFFFF;\n"
"font-size: 24px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"font-weight: bold; /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */"));
        searchButton = new QPushButton(CreateReportWindow);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(60, 670, 211, 51));
        searchButton->setCursor(QCursor(Qt::PointingHandCursor));
        searchButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0056b3; /* \320\236\321\201\320\275\320\276\320\262\320\275\320\276\320\271 \321\206\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    color: white; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    border: none; /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \321\200\320\260\320\274\320\272\320\270 */\n"
"    border-radius: 12px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    font-size: 22px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 \320\272\320\275\320\276\320\277"
                        "\320\272\320\270 */\n"
"    font-weight: bold; /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    margin-top: 5px; /* \320\236\321\202\321\201\321\202\321\203\320\277 \321\201\320\262\320\265\321\200\321\205\321\203 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #004085; /* \320\242\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #003366; /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}"));
        createReportButton = new QPushButton(CreateReportWindow);
        createReportButton->setObjectName("createReportButton");
        createReportButton->setGeometry(QRect(630, 660, 281, 61));
        createReportButton->setCursor(QCursor(Qt::PointingHandCursor));
        createReportButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0056b3; /* \320\236\321\201\320\275\320\276\320\262\320\275\320\276\320\271 \321\206\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    color: white; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    border: none; /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \321\200\320\260\320\274\320\272\320\270 */\n"
"    border-radius: 12px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    font-size: 22px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 \320\272\320\275\320\276\320\277"
                        "\320\272\320\270 */\n"
"    font-weight: bold; /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    margin-top: 5px; /* \320\236\321\202\321\201\321\202\321\203\320\277 \321\201\320\262\320\265\321\200\321\205\321\203 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #004085; /* \320\242\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #003366; /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}"));

        retranslateUi(CreateReportWindow);

        QMetaObject::connectSlotsByName(CreateReportWindow);
    } // setupUi

    void retranslateUi(QDialog *CreateReportWindow)
    {
        CreateReportWindow->setWindowTitle(QCoreApplication::translate("CreateReportWindow", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("CreateReportWindow", "\320\244\320\270\320\273\321\214\321\202\321\200\321\213", nullptr));
        patronymEdit->setPlaceholderText(QCoreApplication::translate("CreateReportWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        nameEdit->setPlaceholderText(QCoreApplication::translate("CreateReportWindow", "\320\230\320\274\321\217", nullptr));
        blockEdit->setPlaceholderText(QCoreApplication::translate("CreateReportWindow", "\320\235\320\276\320\274\320\265\321\200 \320\261\320\273\320\276\320\272\320\260", nullptr));
        surnameEdit->setPlaceholderText(QCoreApplication::translate("CreateReportWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        groupBox_2->setTitle(QString());
        checkSNP->setText(QCoreApplication::translate("CreateReportWindow", "\320\244\320\230\320\236", nullptr));
        checkAge->setText(QCoreApplication::translate("CreateReportWindow", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202", nullptr));
        checkPhone->setText(QCoreApplication::translate("CreateReportWindow", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        checkBlock->setText(QCoreApplication::translate("CreateReportWindow", "\320\235\320\276\320\274\320\265\321\200 \320\261\320\273\320\276\320\272\320\260", nullptr));
        checkOpt->setText(QCoreApplication::translate("CreateReportWindow", "\320\247\320\260\321\201\321\213 \320\236\320\237\320\242", nullptr));
        label_2->setText(QCoreApplication::translate("CreateReportWindow", "\320\241\320\276\320\264\320\265\321\200\320\266\320\260\320\275\320\270\320\265 \320\276\321\202\321\207\321\221\321\202\320\260", nullptr));
        searchButton->setText(QCoreApplication::translate("CreateReportWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        createReportButton->setText(QCoreApplication::translate("CreateReportWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\276\321\202\321\207\321\221\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateReportWindow: public Ui_CreateReportWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEREPORTWINDOW_H
