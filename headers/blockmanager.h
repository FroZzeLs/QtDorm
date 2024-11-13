#ifndef BLOCKMANAGER_H
#define BLOCKMANAGER_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QString>
#include <QVariant>

int getOrAddBlock(QSqlDatabase& db, int blockNumber);

#endif // BLOCKMANAGER_H
