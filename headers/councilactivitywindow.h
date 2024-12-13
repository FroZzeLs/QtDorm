#ifndef COUNCILACTIVITYWINDOW_H
#define COUNCILACTIVITYWINDOW_H

#include "activitywindow.h"

class CouncilActivityWindow : public ActivityWindow {
    Q_OBJECT

public:
    CouncilActivityWindow(Database* db, const StudentResident& student, QWidget *parent = nullptr);

private:
    void displayActivity() override;
};

#endif // COUNCILACTIVITYWINDOW_H
