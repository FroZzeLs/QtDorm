#include "./../headers/studentcouncilmanager.h"

StudentCouncilManager::StudentCouncilManager(Database* db, int studentId) : dtb(db), studentId(studentId) {}

void StudentCouncilManager::updateEvents(int amountOfEvents) {
    QSqlQuery query;

    query.prepare("SELECT events FROM StudentCouncil WHERE studentId = :studentId");
    query.bindValue(":studentId", studentId);

    if (query.exec() && query.next()) {
        query.prepare("UPDATE StudentCouncil SET events = :events WHERE studentId = :studentId");
        query.bindValue(":events", amountOfEvents);
        query.bindValue(":studentId", studentId);

        if (!query.exec()) {
            qDebug() << "Ошибка обновления событий:" << query.lastError().text();
        }
    } else {
        query.prepare("INSERT INTO StudentCouncil (studentId, events) VALUES (:studentId, :events)");
        query.bindValue(":studentId", studentId);
        query.bindValue(":events", amountOfEvents);

        if (!query.exec()) {
            qDebug() << "Ошибка вставки событий:" << query.lastError().text();
        }
    }
}

int StudentCouncilManager::selectEvents(){
    QSqlQuery query;

    query.prepare("SELECT events FROM StudentCouncil WHERE studentId = :studentId");
    query.bindValue(":studentId", studentId);

    if (query.exec() && query.next()) {
        return query.value(0).toInt();
    } else {
        qDebug() << "Ошибка выборки событий или запись не найдена:" << query.lastError().text();
        return 0;
    }
}
