#pragma once
#include "Student.h"
#include <iostream>
#include <string>
#include "Node.cpp"

class StudentList {
private:
    Node* head = nullptr;

public:
    void insert(const student& studentData);
    void printList() const;
    student* searchStudent(std::string_view targetSNP) const;
    void printStudentBySNP(const student* target) const;
    void editStudent(const std::string& targetSNP) const;
    void removeStudent(const std::string& targetSNP);
    void removeAllStudents();
};

