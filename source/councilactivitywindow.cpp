#include "./../headers/councilactivitywindow.h"

CouncilActivityWindow::CouncilActivityWindow(QWidget *parent) : ActivityWindow(parent) {
    displayActivity();
}

void CouncilActivityWindow::displayActivity() {
    activityLabel->setText("Количество мероприятий");
}
