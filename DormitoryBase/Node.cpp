#include "Student.h"
#include <iostream>

class Node {
public:
    student data;
    Node* next = nullptr;

    explicit Node(const student& studentData) : data(studentData) {}
};