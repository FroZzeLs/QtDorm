#pragma once
#include <sqlite3.h>
#include "StudentList.h"
#include "Student.h"

class Database {
private:
	sqlite3* db = nullptr;

public:
	explicit Database(const std::string& dbName);
	~Database();
	void createTable();
	void addList(std::vector<Student>& list);
	std::vector<Student> getAllStudents();
	void updateStudent(const Student& oldInfo, const Student& newInfo);
	void removeStudent(const std::string& targetSurname, const std::string& targetName, const std::string& targetPatronym);
	void deleteAllStudents();
	void addStudent(const Student& student);
};