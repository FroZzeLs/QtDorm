#pragma once
#include <vector>
#include <algorithm>
#include "Student.h"
#include "Database.h"

bool checkForOriginality(const std::vector<Student>& students, const Student& student);

void insert(std::vector<Student>& students, const Student& studentData);

void printList(const std::vector<Student>& students);

Student* searchStudent(std::vector<Student>& students,
    std::string_view targetSurname,
    std::string_view targetName,
    std::string_view targetPatronym);

void printStudentBySnp(const Student* target);

void editStudent(std::vector<Student>& students, const std::string& targetSurname,
    const std::string& targetName, const std::string& targetPatronym, Database& dtb);

void removeStudent(std::vector<Student>& students, const std::string& targetSurname,
    const std::string& targetName, const std::string& targetPatronym, Database& dtb);

void removeAllStudents(std::vector<Student>& students);

std::vector<Student> debtorList(const std::vector<Student>& students);

