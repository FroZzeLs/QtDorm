#include "./../headers/voluntarysquadwindow.h"

VoluntarySquadWindow::VoluntarySquadWindow(QWidget *parent) : ActivityWindow(parent) {
    displayActivity();
}

void VoluntarySquadWindow::displayActivity() {
    activityLabel->setText("Количество ночных обходов за данный месяц");
}
