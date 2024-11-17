#include "./../headers/database.h"
#include "./../headers/blockmanager.h"
#include <QDebug>

Database::Database(const QString& dbName, QStatusBar* statusBarPointer)
    : statusBar(statusBarPointer)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbName);

    if (!db.open()) {
        qDebug() << "Ошибка подключения к базе данных:" << db.lastError().text();
        statusBar->showMessage("Ошибка подключения к базе данных: " + db.lastError().text(), 5000);
    } else {
        qDebug() << "Подключение к базе данных успешно!";
        statusBar->showMessage("Подключение к базе данных успешно!", 5000);
    }
}

Database::~Database() {
    db.close();
}

bool Database::createTables() {
    QSqlQuery query;

    if (!query.exec("CREATE TABLE IF NOT EXISTS Blocks ("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                    "blockNumber INTEGER UNIQUE, "
                    "residentCount INTEGER DEFAULT 0)")) {
        qDebug() << "Ошибка создания таблицы Blocks:" << query.lastError().text();
        statusBar->showMessage("Ошибка создания таблицы Blocks: " + query.lastError().text(), 5000);
        return false;
    }

    if (!query.exec("CREATE TABLE IF NOT EXISTS Students ("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                    "blockId INTEGER, "
                    "surname TEXT, "
                    "name TEXT, "
                    "patronym TEXT, "
                    "phoneNumber TEXT UNIQUE, "
                    "age INTEGER, "
                    "blockNumber INTEGER, "
                    "studActive INTEGER, "
                    "opt INTEGER, "
                    "debtor INTEGER, "
                    "FOREIGN KEY(blockId) REFERENCES Blocks(id))")) {
        qDebug() << "Ошибка создания таблицы Students:" << query.lastError().text();
        statusBar->showMessage("Ошибка создания таблицы Students: " + query.lastError().text(), 5000);
        return false;
    }

    qDebug() << "Таблицы успешно созданы.";
    return true;
}

bool Database::addStudent(const StudentResident& student) {
    QSqlQuery query;
    int blockId = getOrAddBlock(this->db, student.getBlockNumber());
    query.prepare("INSERT INTO Students (blockId, surname, name, patronym, phoneNumber, age, blockNumber, studActive, opt, debtor) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?)");

    query.addBindValue(blockId);
    query.addBindValue(student.getSurname());
    query.addBindValue(student.getName());
    query.addBindValue(student.getPatronym());
    query.addBindValue(student.getPhoneNumber());
    query.addBindValue(student.getAge());
    query.addBindValue(student.getBlockNumber());
    query.addBindValue(student.getStudActive());
    query.addBindValue(student.getOpt());
    query.addBindValue(student.getDebtor() ? 1 : 0);

    if (!query.exec()) {
        qDebug() << "Ошибка добавления студента:" << query.lastError().text();
        return false;
    }
    query.prepare("UPDATE Blocks SET residentCount = residentCount + 1 WHERE id = ?");
    query.addBindValue(blockId);
    if (!query.exec()) {
        qDebug() << "Ошибка обновления информации о блоке:" << query.lastError().text();
        return false;
    }
    return true;
}

QSqlDatabase Database::getDb() const{
    return db;
}

bool Database::deleteAllData() {
    QSqlQuery query;
    query.exec("PRAGMA foreign_keys=OFF");
    if (!query.exec("DELETE FROM Students")) {
        qDebug() << "Ошибка при удалении данных из таблицы Students:" << query.lastError().text();
        return false;
    }

    if (!query.exec("DELETE FROM Blocks")) {
        qDebug() << "Ошибка при удалении данных из таблицы Blocks:" << query.lastError().text();
        return false;
    }

    query.exec("PRAGMA foreign_keys=ON");

    return true;
}

List<StudentResident> Database::searchStudents(int floor) {
    List<StudentResident> students;

    int minBlockNumber = floor * 100;
    int maxBlockNumber = minBlockNumber + 99;

    QSqlQuery query;
    query.prepare("SELECT id, surname, name, patronym, phoneNumber, age, blockNumber, studActive, opt "
                  "FROM Students "
                  "WHERE blockNumber BETWEEN :minBlock AND :maxBlock");

    query.bindValue(":minBlock", minBlockNumber);
    query.bindValue(":maxBlock", maxBlockNumber);

    if (!query.exec()) {
        qDebug() << "Ошибка при выполнении запроса на чтение студентов:" << query.lastError().text();
        return students;
    }

    while (query.next()) {
        int id = query.value(0).toInt();
        QString surname = query.value(1).toString();
        QString name = query.value(2).toString();
        QString patronym = query.value(3).toString();
        QString phoneNumber = query.value(4).toString();
        int age = query.value(5).toInt();
        int blockNumber = query.value(6).toInt();
        int studActive = query.value(7).toInt();
        int opt = query.value(8).toInt();

        StudentResident student(id, surname, name, patronym, phoneNumber,
                                age, blockNumber, studActive, opt);
        students.append(student);
    }
    std::sort(students.begin(), students.end());
    return students;
}

bool Database::removeStudent(int studentId) {
    QSqlQuery query;

    query.prepare("SELECT blockId FROM Students WHERE id = ?");
    query.addBindValue(studentId);

    if (!query.exec()) {
        qDebug() << "Ошибка получения блока студента:" << query.lastError().text();
        return false;
    }

    int blockId = 0;
    if (query.next()) {
        blockId = query.value(0).toInt();
    } else {
        qDebug() << "Студент с ID" << studentId << "не найден.";
        return false; // Студент не найден
    }

    query.prepare("DELETE FROM Students WHERE id = ?");
    query.addBindValue(studentId);

    if (!query.exec()) {
        qDebug() << "Ошибка удаления студента:" << query.lastError().text();
        return false;
    }

    query.prepare("UPDATE Blocks SET residentCount = residentCount - 1 WHERE id = ?");
    query.addBindValue(blockId);
    if (!query.exec()) {
        qDebug() << "Ошибка обновления информации о блоке после удаления студента:" << query.lastError().text();
        return false;
    }

    return true;
}

List<StudentResident> Database::searchStudents(const QString& surname, const QString& name,
                                                const QString& patronym, int blockNumber) {
    List<StudentResident> students;
    QSqlQuery query;

    QString sql = "SELECT * FROM Students WHERE 1=1 "; // 1=1 позволяет легко добавлять условия

    if (!surname.isEmpty()) {
        sql += "AND surname LIKE ? ";
    }
    if (!name.isEmpty()) {
        sql += "AND name LIKE ? ";
    }
    if (!patronym.isEmpty()) {
        sql += "AND patronym LIKE ? ";
    }
    if (blockNumber > 0) {
        sql += "AND blockNumber = ? ";
    }

    query.prepare(sql);

    int index = 0;
    if (!surname.isEmpty()) {
        query.bindValue(index++, "%" + surname + "%");
    }
    if (!name.isEmpty()) {
        query.bindValue(index++, "%" + name + "%");
    }
    if (!patronym.isEmpty()) {
        query.bindValue(index++, "%" + patronym + "%");
    }
    if (blockNumber > 0) {
        query.bindValue(index++, blockNumber);
    }

    if (!query.exec()) {
        qDebug() << "Ошибка выполнения запроса поиска студентов:" << query.lastError().text();
        return students;
    }

    while (query.next()) {
        StudentResident student;
        student.setId(query.value("id").toInt());
        student.setSurname(query.value("surname").toString());
        student.setName(query.value("name").toString());
        student.setPatronym(query.value("patronym").toString());
        student.setPhoneNumber(query.value("phoneNumber").toString());
        student.setAge(query.value("age").toInt());
        student.setBlockNumber(query.value("blockNumber").toInt());
        student.setStudActive(query.value("studActive").toInt());
        student.setOpt(query.value("opt").toInt());
        student.setDebtor(query.value("debtor").toBool());

        students.append(student);
    }
    std::sort(students.begin(), students.end());
    return students;
}

bool Database::updateStudent(const StudentResident& oldInfo, const StudentResident& newInfo) {
    QSqlQuery query;
    int newBlockId = getOrAddBlock(this->db, newInfo.getBlockNumber());

    query.prepare("UPDATE Students SET blockId = ?, surname = ?, name = ?, patronym = ?, phoneNumber = ?, "
                  "age = ?, blockNumber = ?, studActive = ?, opt = ?, debtor = ? WHERE id = ?");

    query.addBindValue(newBlockId);
    query.addBindValue(newInfo.getSurname());
    query.addBindValue(newInfo.getName());
    query.addBindValue(newInfo.getPatronym());
    query.addBindValue(newInfo.getPhoneNumber());
    query.addBindValue(newInfo.getAge());
    query.addBindValue(newInfo.getBlockNumber());
    query.addBindValue(newInfo.getStudActive());
    query.addBindValue(newInfo.getOpt());
    query.addBindValue(newInfo.getDebtor() ? 1 : 0);
    query.addBindValue(oldInfo.getId());

    if (!query.exec()) {
        qDebug() << "Ошибка обновления информации:" << query.lastError().text();
        return false;
    }

    if (oldInfo.getBlockNumber() != newInfo.getBlockNumber()) {
        int oldBlockId = getOrAddBlock(db, oldInfo.getBlockNumber());
        query.prepare("UPDATE Blocks SET residentCount = residentCount - 1 WHERE id = ?");
        query.addBindValue(oldBlockId);

        if (!query.exec()) {
            qDebug() << "Ошибка обновления информации о блоке (уменьшение):" << query.lastError().text();
            return false;
        }

        query.prepare("UPDATE Blocks SET residentCount = residentCount + 1 WHERE id = ?");
        query.addBindValue(newBlockId);

        if (!query.exec()) {
            qDebug() << "Ошибка обновления информации о блоке (увеличение):" << query.lastError().text();
            return false;
        }
    }
    return true;
}
