#ifndef COUNCILACTIVITYWINDOW_H
#define COUNCILACTIVITYWINDOW_H

#include "activitywindow.h"

class CouncilActivityWindow : public ActivityWindow {
    Q_OBJECT

public:
    explicit CouncilActivityWindow(QWidget *parent = nullptr);

protected:
    void displayActivity() override;
};

#endif // COUNCILACTIVITYWINDOW_H
