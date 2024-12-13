#include "./../headers/councilactivitywindow.h"

CouncilActivityWindow::CouncilActivityWindow(Database* db, const StudentResident& student, QWidget *parent) : ActivityWindow(db, student, parent) {}

void CouncilActivityWindow::displayActivity() {
    activityLabel->setText("Количество мероприятий");
}
