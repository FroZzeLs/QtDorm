#pragma once
#include "Student.h"
#include "Node.h"
#include "Header.h"

class StudentList {
private:
    Node* head = nullptr;

public:
    Node* getHead();
    void insert(const Student& studentData);
    void printList() const;
    Student* searchStudent(std::string_view targetSNP) const;
    void printStudentBySNP(const Student* target) const;
    void editStudent(const std::string& targetSNP) const;
    void removeStudent(const std::string& targetSNP);
    void removeAllStudents();
    StudentList debtorList() const;
};

