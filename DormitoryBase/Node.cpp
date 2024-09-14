#include "Student.h"
#include <iostream>

class Node {
public:
    student data;
    Node* next = nullptr;

    Node(const student& studentData) : data(studentData) {}
};