#include "./../headers/councilactivitywindow.h"

CouncilActivityWindow::CouncilActivityWindow(QWidget *parent) : ActivityWindow(parent) {}

void CouncilActivityWindow::displayActivity() {
    activityLabel->setText("Количество мероприятий");
}
