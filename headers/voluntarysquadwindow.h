#ifndef VOLUNTARYSQUADWINDOW_H
#define VOLUNTARYSQUADWINDOW_H

#include "activitywindow.h"

class VoluntarySquadWindow : public ActivityWindow {
    Q_OBJECT

public:
    VoluntarySquadWindow(Database* db, const StudentResident& student, QWidget *parent = nullptr);

protected:
    void displayActivity() override;
};

#endif // VOLUNTARYSQUADWINDOW_H
