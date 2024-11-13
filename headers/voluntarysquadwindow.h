#ifndef VOLUNTARYSQUADWINDOW_H
#define VOLUNTARYSQUADWINDOW_H

#include "activitywindow.h"

class VoluntarySquadWindow : public ActivityWindow {
    Q_OBJECT

public:
    explicit VoluntarySquadWindow(QWidget *parent = nullptr);

protected:
    void displayActivity() override;
};

#endif // VOLUNTARYSQUADWINDOW_H
