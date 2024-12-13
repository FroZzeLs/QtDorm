#ifndef VOLUNTARYSQUADMANAGER_H
#define VOLUNTARYSQUADMANAGER_H

#include "database.h"

class VoluntarySquadManager
{
private:
    Database* dtb;
    int studentId;
public:
    VoluntarySquadManager(Database* db, int studentId);
    void updateRounds(int AmountOfRounds);
    int selectRounds();
};

#endif // VOLUNTARYSQUADMANAGER_H
