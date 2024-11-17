#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QString>
#include <QVariant>
#include <QStatusBar>
#include "studentresident.h"
#include "list.h"

class Database {
public:
    explicit Database(const QString& dbName, QStatusBar* statusBar);
    ~Database();

    bool createTables();
    bool addStudent(const StudentResident& student);
    bool deleteAllData();
    bool removeStudent(int studentId);
    bool updateStudent(const StudentResident& oldInfo, const StudentResident& newInfo);

    List<StudentResident> searchStudents(int floor);
    List<StudentResident> searchStudents(const QString& surname, const QString& name, const QString& patronym, int blockNumber);

    QSqlDatabase getDb() const;

private:
    QSqlDatabase db;
    QStatusBar* statusBar; // Указатель на статусную строку
};

#endif // DATABASE_H
