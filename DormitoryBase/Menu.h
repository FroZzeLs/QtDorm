#pragma once
#include "List.h"

void addNewStudents(StudentList& list, Database& dtb);

void searchBySnp(StudentList& list);

void updateStudent(StudentList& list, const Database& dtb);

void removeOneStudent(StudentList& list, const Database& dtb);