#pragma once
#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

class Node {
public:
    student data;
    Node* next;

    explicit Node(student studentData);
};

class StudentList {
private:
    Node* head;

public:
    StudentList();

    ~StudentList();

    void insert(student studentData);

    void printList();

    student* searchStudent(string targetSNP);

    void printStudentBySNP(student* target);

    void editStudent(string targetSNP);

    void removeStudent(string targetSNP);

    void removeAllStudents();
};
