#pragma once
#include <iostream>
#include <sqlite3.h>
#include "List.h"
#include <format>
#include "Logic.h"

class Database {
	friend class StudentList;
private:
	sqlite3* db = nullptr;

public:
	Database(const std::string& dbName);
	~Database();
	void createTable();
	void addStudent(const Student& student);
	void addList(const StudentList& list);
	StudentList getAllStudents();
	void updateStudent(const Student& oldInfo, const Student& newInfo);
	void removeStudent(const std::string& targetSurname, const std::string& targetName, const std::string& targetPatronym);
	void deleteAllStudents();
};