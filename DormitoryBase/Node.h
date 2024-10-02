#pragma once
#include "Student.h"
#include <iostream>

class Node {
public:
    Student data;
    Node* next = nullptr;

    explicit Node(const Student& studentData);
};