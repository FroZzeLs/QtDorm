#ifndef ACTIVITYWINDOW_H
#define ACTIVITYWINDOW_H

#include <QWidget>
#include <QVBoxLayout>
#include <QSpinBox>
#include <QLabel>
#include <QString>
#include <QPushButton>

class ActivityWindow : public QWidget {
    Q_OBJECT

public:
    explicit ActivityWindow(QWidget *parent = nullptr);

protected:
    virtual void displayActivity() = 0;

    QSpinBox *spinBox;
    QLabel *activityLabel;
    QPushButton *saveButton;

    void setupUI();
};

#endif // ACTIVITYWINDOW_H
