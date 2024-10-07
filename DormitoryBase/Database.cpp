#include "Database.h"

Database::Database(const std::string& dbName) {
    if (sqlite3_open(dbName.c_str(), &db) != SQLITE_OK) {
        std::cerr << "Ошибка открытия базы данных: " << sqlite3_errmsg(db) << std::endl;
    }
}

Database::~Database() {
    sqlite3_close(db);
}

void Database::createTable() {
    const char* sql = R"(
            CREATE TABLE IF NOT EXISTS Student (
                id INTEGER PRIMARY KEY AUTOINCREMENT,
                surname TEXT NOT NULL,
                name TEXT NOT NULL,
                patronym TEXT NOT NULL,
                phoneNumber TEXT UNIQUE NOT NULL,
                age INTEGER NOT NULL,
                blockNumber INTEGER NOT NULL,
                studActive INTEGER NOT NULL,
                opt INTEGER NOT NULL
            );
        )";

    char* errMsg;
    if (sqlite3_exec(db, sql, nullptr, nullptr, &errMsg) != SQLITE_OK) {
        std::cerr << "Ошибка создания таблицы: " << errMsg << std::endl;
        sqlite3_free(errMsg);
    }
}

void Database::addStudent(const Student& student) {
    const char* sql = "INSERT OR IGNORE INTO Student (surname, name, patronym, phoneNumber, age, blockNumber, studActive, opt) "
        "VALUES (?, ?, ?, ?, ?, ?, ?, ?);";

    sqlite3_stmt* stmt;
    if (sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr) == SQLITE_OK) {
        sqlite3_bind_text(stmt, 1, student.surname.c_str(), -1, SQLITE_TRANSIENT);
        sqlite3_bind_text(stmt, 2, student.name.c_str(), -1, SQLITE_TRANSIENT);
        sqlite3_bind_text(stmt, 3, student.patronym.c_str(), -1, SQLITE_TRANSIENT);
        sqlite3_bind_text(stmt, 4, student.phoneNumber.c_str(), -1, SQLITE_TRANSIENT);
        sqlite3_bind_int(stmt, 5, student.age);
        sqlite3_bind_int(stmt, 6, student.blockNumber);
        sqlite3_bind_int(stmt, 7, student.studActive);
        sqlite3_bind_int(stmt, 8, student.opt);

        if (sqlite3_step(stmt) != SQLITE_DONE) {
            std::cerr << "Ошибка вставки данных: " << sqlite3_errmsg(db) << std::endl;
        }
    }
    else {
        std::cerr << "Ошибка подготовки запроса: " << sqlite3_errmsg(db) << std::endl;
    }
    sqlite3_finalize(stmt);
}


void Database::addList(std::vector<Student>& list) {
    for (const auto& student : list) {
        addStudent(student); // Предполагается, что есть функция addStudent, которая добавляет студента в базу данных
    }
}

std::vector<Student> Database::getAllStudents() {
    std::vector<Student> list;
    const char* sql = "SELECT * FROM Student;";
    sqlite3_stmt* stmt;

    if (sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr) == SQLITE_OK) {
        while (sqlite3_step(stmt) == SQLITE_ROW) {
            std::string surname = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
            std::string name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2));
            std::string patronym = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 3));
            std::string phoneNumber = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 4));
            int age = sqlite3_column_int(stmt, 5);
            int blockNumber = sqlite3_column_int(stmt, 6);
            int studActive = sqlite3_column_int(stmt, 7);
            int opt = sqlite3_column_int(stmt, 8);

            Student student(surname, name, patronym, phoneNumber, age, blockNumber, studActive, opt, normOfOpt() > opt);
            list.push_back(student);
        }
    }
    else {
        std::cerr << "Ошибка подготовки запроса: " << sqlite3_errmsg(db) << std::endl;
    }
    sqlite3_finalize(stmt);
    return list;
}

void Database::updateStudent(const Student& oldInfo, const Student& newInfo) {
    const char* sql = R"(
            UPDATE Student
            SET surname = ?, name = ?, patronym = ?, phoneNumber = ?, age = ?, blockNumber = ?, studActive = ?, opt = ?
            WHERE phoneNumber = ?;
        )";

    sqlite3_stmt* stmt;
    if (sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "Ошибка подготовки запроса: " << sqlite3_errmsg(db) << std::endl;
        return;
    }

    sqlite3_bind_text(stmt, 1, newInfo.surname.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 2, newInfo.name.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 3, newInfo.patronym.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 4, newInfo.phoneNumber.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_int(stmt, 5, newInfo.age);
    sqlite3_bind_int(stmt, 6, newInfo.blockNumber);
    sqlite3_bind_int(stmt, 7, newInfo.studActive);
    sqlite3_bind_int(stmt, 8, newInfo.opt);
    sqlite3_bind_text(stmt, 9, oldInfo.phoneNumber.c_str(), -1, SQLITE_STATIC);

    if (sqlite3_step(stmt) != SQLITE_DONE) {
        std::cerr << "Ошибка обновления данных: " << sqlite3_errmsg(db) << std::endl;
    }

    sqlite3_finalize(stmt);
}

void Database::removeStudent(const std::string& surname, const std::string& name, const std::string& patronym) {
    const char* sql = R"(
            DELETE FROM Student
            WHERE surname = ? AND name = ? AND patronym = ?;
        )";

    sqlite3_stmt* stmt;

    if (sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "Ошибка подготовки запроса: " << sqlite3_errmsg(db) << std::endl;
        return;
    }

    sqlite3_bind_text(stmt, 1, surname.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 2, name.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 3, patronym.c_str(), -1, SQLITE_STATIC);

    if (sqlite3_step(stmt) != SQLITE_DONE) {
        std::cerr << "Ошибка удаления данных: " << sqlite3_errmsg(db) << std::endl;
    }

    sqlite3_finalize(stmt);
}

void Database::deleteAllStudents() {
    const char* sql = "DELETE FROM Student;";

    char* errMsg;
    if (sqlite3_exec(db, sql, nullptr, nullptr, &errMsg) != SQLITE_OK) {
        std::cerr << "Ошибка удаления всех студентов: " << errMsg << std::endl;
        sqlite3_free(errMsg);
    }
    else {
        std::cout << "Все студенты успешно удалены." << std::endl;
    }
}