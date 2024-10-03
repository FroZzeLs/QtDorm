#pragma once
#include "Student.h"
#include "Node.h"
#include "Logic.h"

class StudentList {
private:
    Node* head = nullptr;

public:
    Node* getHead();
    void insert(const Student& studentData);
    void printList() const;
    Student* searchStudent(std::string_view targetSurname, std::string_view targetNname, std::string_view targetPatronym) const;
    void printStudentBySNP(const Student* target) const;
    void editStudent(const std::string& targetSurname, const std::string& targetName, const std::string& targetPatronym) const;
    void removeStudent(const std::string& targetSurname, const std::string& targetName, const std::string& targetPatronym);
    void removeAllStudents();
    StudentList debtorList() const;
};

