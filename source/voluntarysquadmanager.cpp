#include "./../headers/voluntarysquadmanager.h"

VoluntarySquadManager::VoluntarySquadManager(Database* db, int studentId) : dtb(db), studentId(studentId) {}

void VoluntarySquadManager::updateRounds(int amountOfRounds){
    QSqlQuery query;

    query.prepare("SELECT events FROM VoluntarySquad WHERE studentId = :studentId");
    query.bindValue(":studentId", studentId);

    if (query.exec() && query.next()) {
        query.prepare("UPDATE VoluuntarySquad SET rounds = :rounds WHERE studentId = :studentId");
        query.bindValue(":rounds", amountOfRounds);
        query.bindValue(":studentId", studentId);

        if (!query.exec()) {
            qDebug() << "Ошибка обновления обходов:" << query.lastError().text();
        }
    } else {
        query.prepare("INSERT INTO VoluntarySquad (studentId, rounds) VALUES (:studentId, :rounds)");
        query.bindValue(":studentId", studentId);
        query.bindValue(":rounds", amountOfRounds);

        if (!query.exec()) {
            qDebug() << "Ошибка вставки обходов:" << query.lastError().text();
        }
    }
}

int VoluntarySquadManager::selectRounds(){
    QSqlQuery query;

    query.prepare("SELECT events FROM VoluntarySquad WHERE studentId = :studentId");
    query.bindValue(":studentId", studentId);

    if (query.exec() && query.next()) {
        return query.value(0).toInt();
    } else {
        qDebug() << "Ошибка выборки обходов или запись не найдена:" << query.lastError().text();
        return 0;
    }
}
