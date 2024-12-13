/********************************************************************************
** Form generated from reading UI file 'createreportwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEREPORTWIDGET_H
#define UI_CREATEREPORTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateReportWidget
{
public:
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkSNP_2;
    QCheckBox *checkAge_2;
    QCheckBox *checkPhone_2;
    QCheckBox *checkBlock_2;
    QCheckBox *checkOpt_2;
    QLabel *label_3;
    QPushButton *createReportButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QPushButton *searchButton;
    QGroupBox *groupBox;
    QLabel *label_4;
    QLineEdit *patronymEdit_2;
    QLineEdit *nameEdit_2;
    QLineEdit *blockEdit_2;
    QLineEdit *surnameEdit_2;

    void setupUi(QWidget *CreateReportWidget)
    {
        if (CreateReportWidget->objectName().isEmpty())
            CreateReportWidget->setObjectName("CreateReportWidget");
        CreateReportWidget->resize(1289, 1039);
        groupBox_2 = new QGroupBox(CreateReportWidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 560, 321, 291));
        groupBox_2->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #007BFF; /* \320\241\320\270\320\275\320\270\320\271 \321\204\320\276\320\275 \320\264\320\273\321\217 \320\276\320\272\320\275\320\260 */\n"
"    border-radius: 12px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"}"));
        verticalLayoutWidget_2 = new QWidget(groupBox_2);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(10, 50, 231, 231));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        checkSNP_2 = new QCheckBox(verticalLayoutWidget_2);
        checkSNP_2->setObjectName("checkSNP_2");
        checkSNP_2->setCursor(QCursor(Qt::PointingHandCursor));
        checkSNP_2->setMouseTracking(true);
        checkSNP_2->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
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

        verticalLayout_3->addWidget(checkSNP_2);

        checkAge_2 = new QCheckBox(verticalLayoutWidget_2);
        checkAge_2->setObjectName("checkAge_2");
        checkAge_2->setCursor(QCursor(Qt::PointingHandCursor));
        checkAge_2->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
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

        verticalLayout_3->addWidget(checkAge_2);

        checkPhone_2 = new QCheckBox(verticalLayoutWidget_2);
        checkPhone_2->setObjectName("checkPhone_2");
        checkPhone_2->setCursor(QCursor(Qt::PointingHandCursor));
        checkPhone_2->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
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

        verticalLayout_3->addWidget(checkPhone_2);

        checkBlock_2 = new QCheckBox(verticalLayoutWidget_2);
        checkBlock_2->setObjectName("checkBlock_2");
        checkBlock_2->setCursor(QCursor(Qt::PointingHandCursor));
        checkBlock_2->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
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

        verticalLayout_3->addWidget(checkBlock_2);

        checkOpt_2 = new QCheckBox(verticalLayoutWidget_2);
        checkOpt_2->setObjectName("checkOpt_2");
        checkOpt_2->setCursor(QCursor(Qt::PointingHandCursor));
        checkOpt_2->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
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

        verticalLayout_3->addWidget(checkOpt_2);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 10, 241, 21));
        label_3->setStyleSheet(QString::fromUtf8("color: #FFFFFF;\n"
"font-size: 24px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"font-weight: bold; /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */"));
        createReportButton = new QPushButton(CreateReportWidget);
        createReportButton->setObjectName("createReportButton");
        createReportButton->setGeometry(QRect(690, 950, 281, 61));
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
        scrollArea = new QScrollArea(CreateReportWidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(350, 40, 931, 901));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 929, 899));
        scrollArea->setWidget(scrollAreaWidgetContents_2);
        searchButton = new QPushButton(CreateReportWidget);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(40, 950, 251, 61));
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
        groupBox = new QGroupBox(CreateReportWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 80, 321, 351));
        groupBox->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #007BFF; /* \320\241\320\270\320\275\320\270\320\271 \321\204\320\276\320\275 \320\264\320\273\321\217 \320\276\320\272\320\275\320\260 */\n"
"    border-radius: 12px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"}"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 10, 111, 21));
        label_4->setStyleSheet(QString::fromUtf8("color: #FFFFFF;\n"
"font-size: 24px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"font-weight: bold; /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */"));
        patronymEdit_2 = new QLineEdit(groupBox);
        patronymEdit_2->setObjectName("patronymEdit_2");
        patronymEdit_2->setGeometry(QRect(10, 200, 301, 51));
        patronymEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        nameEdit_2 = new QLineEdit(groupBox);
        nameEdit_2->setObjectName("nameEdit_2");
        nameEdit_2->setGeometry(QRect(10, 120, 301, 51));
        nameEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        blockEdit_2 = new QLineEdit(groupBox);
        blockEdit_2->setObjectName("blockEdit_2");
        blockEdit_2->setGeometry(QRect(10, 280, 301, 51));
        blockEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        surnameEdit_2 = new QLineEdit(groupBox);
        surnameEdit_2->setObjectName("surnameEdit_2");
        surnameEdit_2->setGeometry(QRect(10, 40, 301, 51));
        surnameEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        retranslateUi(CreateReportWidget);

        QMetaObject::connectSlotsByName(CreateReportWidget);
    } // setupUi

    void retranslateUi(QWidget *CreateReportWidget)
    {
        CreateReportWidget->setWindowTitle(QCoreApplication::translate("CreateReportWidget", "Form", nullptr));
        groupBox_2->setTitle(QString());
        checkSNP_2->setText(QCoreApplication::translate("CreateReportWidget", "\320\244\320\230\320\236", nullptr));
        checkAge_2->setText(QCoreApplication::translate("CreateReportWidget", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202", nullptr));
        checkPhone_2->setText(QCoreApplication::translate("CreateReportWidget", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        checkBlock_2->setText(QCoreApplication::translate("CreateReportWidget", "\320\235\320\276\320\274\320\265\321\200 \320\261\320\273\320\276\320\272\320\260", nullptr));
        checkOpt_2->setText(QCoreApplication::translate("CreateReportWidget", "\320\247\320\260\321\201\321\213 \320\236\320\237\320\242", nullptr));
        label_3->setText(QCoreApplication::translate("CreateReportWidget", "\320\241\320\276\320\264\320\265\321\200\320\266\320\260\320\275\320\270\320\265 \320\276\321\202\321\207\321\221\321\202\320\260", nullptr));
        createReportButton->setText(QCoreApplication::translate("CreateReportWidget", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\276\321\202\321\207\321\221\321\202", nullptr));
        searchButton->setText(QCoreApplication::translate("CreateReportWidget", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        groupBox->setTitle(QString());
        label_4->setText(QCoreApplication::translate("CreateReportWidget", "\320\244\320\270\320\273\321\214\321\202\321\200\321\213", nullptr));
        patronymEdit_2->setPlaceholderText(QCoreApplication::translate("CreateReportWidget", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        nameEdit_2->setPlaceholderText(QCoreApplication::translate("CreateReportWidget", "\320\230\320\274\321\217", nullptr));
        blockEdit_2->setPlaceholderText(QCoreApplication::translate("CreateReportWidget", "\320\235\320\276\320\274\320\265\321\200 \320\261\320\273\320\276\320\272\320\260", nullptr));
        surnameEdit_2->setPlaceholderText(QCoreApplication::translate("CreateReportWidget", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateReportWidget: public Ui_CreateReportWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEREPORTWIDGET_H
