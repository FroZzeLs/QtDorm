#pragma once
#include "Student.h"
#include "Node.h"
#include "Logic.h"
#include "Database.h"
#include <format>

class StudentList {
   friend class Database;

private:
    Node* head = nullptr;

public:
    Node* getHead();
    bool checkForOriginality(const Student& student);
    void insert(const Student& studentData);
    void printList() const;
    Student* searchStudent(std::string_view targetSurname, std::string_view targetNname, std::string_view targetPatronym) const;
    void printStudentBySnp(const Student* target) const;
    void editStudent(const std::string& targetSurname, const std::string& targetName, const std::string& targetPatronym, Database dtb) const;
    void removeStudent(const std::string& targetSurname, const std::string& targetName, const std::string& targetPatronym, Database dtb);
    void removeAllStudents();
    StudentList debtorList() const;
};

