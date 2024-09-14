#pragma once
#include "Student.h"
#include "Node.cpp"
#include "Header.h"

class StudentList {
private:
    Node* head = nullptr;

public:
    Node* getHead();
    void insert(const student& studentData);
    void printList() const;
    student* searchStudent(std::string_view targetSNP) const;
    void printStudentBySNP(const student* target) const;
    void editStudent(const std::string& targetSNP) const;
    void removeStudent(const std::string& targetSNP);
    void removeAllStudents();
    StudentList DebtorList() const;
};

