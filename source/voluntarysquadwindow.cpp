#include "./../headers/voluntarysquadwindow.h"

VoluntarySquadWindow::VoluntarySquadWindow(Database* db, const StudentResident& student, QWidget *parent) : ActivityWindow(db, student, parent) {}

void VoluntarySquadWindow::displayActivity() {
    activityLabel->setText("Количество ночных обходов");
}
