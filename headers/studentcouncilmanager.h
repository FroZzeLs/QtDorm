#ifndef STUDENTCOUNCILMANAGER_H
#define STUDENTCOUNCILMANAGER_H

#include "database.h"

class StudentCouncilManager
{
private:
    Database* dtb;
    int studentId;
public:
    StudentCouncilManager(Database* db, int studentId);
    void updateEvents(int amountOfEvents);
    int selectEvents();
};

#endif // STUDENTCOUNCILMANAGER_H
