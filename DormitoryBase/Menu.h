#pragma once
#include "StudentList.h"

void addNewStudents(std::vector<Student>& list, Database& dtb);

void searchBySnp(std::vector<Student>& list);

void updateStudent(std::vector<Student>& list, Database& dtb);

void removeOneStudent(std::vector<Student>& list, Database& dtb);