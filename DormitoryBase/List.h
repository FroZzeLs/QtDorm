#pragma once
#include "Student.h"
#include <iostream>
#include <string>

class Node {
public:
    student data;
    Node* next;

    Node(student studentData);
};

class StudentList {
private:
    Node* head;

public:
    StudentList();
    ~StudentList();

    void insert(student studentData);
    void printList() const;
    student* searchStudent(const std::string& targetSNP) const;
    void printStudentBySNP(student* target) const;
    void editStudent(const std::string& targetSNP);
    void removeStudent(const std::string& targetSNP);
    void removeAllStudents();
};

