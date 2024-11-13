#include "./../headers/blockmanager.h"

int getOrAddBlock(QSqlDatabase& db, int blockNumber) {
    QSqlQuery query(db);

    query.prepare("SELECT id FROM Blocks WHERE blockNumber = ?");
    query.addBindValue(blockNumber);

    if (query.exec() && query.next()) {
        return query.value(0).toInt();
    }
    query.prepare("INSERT INTO Blocks (blockNumber) VALUES (?)");
    query.addBindValue(blockNumber);

    if (!query.exec()) {
        qDebug() << "Ошибка добавления нового блока:" << query.lastError().text();
        return -1;
    }
    return query.lastInsertId().toInt();
}
