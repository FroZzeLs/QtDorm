#pragma once
#include "Student.h"
#include <iostream>
#include <string>

class Node {
public:
    student data;
    Node* next = nullptr;

    explicit Node(const student& studentData);
};

class StudentList {
private:
    Node* head = nullptr;

public:
    void insert(const student& studentData);
    void printList() const;
    student* searchStudent(const std::string& targetSNP) const;
    void printStudentBySNP(const student* target) const;
    void editStudent(const std::string& targetSNP);
    void removeStudent(const std::string& targetSNP);
    void removeAllStudents();
};

