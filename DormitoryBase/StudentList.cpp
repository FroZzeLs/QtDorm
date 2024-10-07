#include "StudentList.h"

bool checkForOriginality(const std::vector<Student>& students, const Student& student) {
    return std::any_of(students.begin(), students.end(), [&](const Student& currentStudent) {
        return student.getSurname() == currentStudent.getSurname() &&
            student.getName() == currentStudent.getName() &&
            student.getPatronym() == currentStudent.getPatronym() &&
            student.getPhoneNumber() == currentStudent.getPhoneNumber();
        });
}

void insert(std::vector<Student>& students, const Student& studentData) {
    if (checkForOriginality(students, studentData)) {
        std::cout << "������ ������� ��� ������� � ��!" << std::endl;
        return;
    }

    students.push_back(studentData);
    std::sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
        return a.getBlockNumber() < b.getBlockNumber();
        });
}

void printList(const std::vector<Student>& students) {
    if (students.empty()) {
        std::cout << "��������� � ���� ���!" << std::endl;
        return;
    }
    for (size_t i = 0; i < students.size(); ++i) {
        std::cout << "������� " << (i + 1) << std::endl;
        students[i].printInfo();
        std::cout << std::endl;
    }
}

Student* searchStudent(std::vector<Student>& students,
    std::string_view targetSurname,
    std::string_view targetName,
    std::string_view targetPatronym) {
    auto it = std::find_if(students.begin(), students.end(), [&](const Student& student) {
        return student.getSurname() == targetSurname &&
            student.getName() == targetName &&
            student.getPatronym() == targetPatronym;
        });
    return it != students.end() ? &(*it) : nullptr;
}

void printStudentBySnp(const Student* target) {
    if (!target) {
        std::cout << "������� � ������ ��� �� ������." << std::endl;
        return;
    }
    std::cout << "������� �������:" << std::endl;
    target->printInfo();
}

void editStudent(std::vector<Student>& students, const std::string& targetSurname,
    const std::string& targetName, const std::string& targetPatronym, Database& dtb) {
    Student* foundedStudent = searchStudent(students, targetSurname, targetName, targetPatronym);
    if (foundedStudent) {
        Student oldInfo = *foundedStudent;
        std::cout << "�������������� ���������� � ��������: " << targetSurname << " "
            << targetName << " " << targetPatronym << std::endl;
        foundedStudent->inputInfo(); // ��������������, ��� ������� ����� ���������� ����������� � ������ Student
        // ���� ������ ���������� ������ � ���� ������ (���� ����������)
        dtb.updateStudent(oldInfo, *foundedStudent);
    }
    else {
        std::cout << "������� � ��� '" << targetSurname << " " << targetName << " "
            << targetPatronym << "' �� ������." << std::endl;
    }
}

void removeStudent(std::vector<Student>& students, const std::string& targetSurname,
    const std::string& targetName, const std::string& targetPatronym, Database& dtb) {
    auto it = std::remove_if(students.begin(), students.end(), [&](const Student& student) {
        return student.getSurname() == targetSurname &&
            student.getName() == targetName &&
            student.getPatronym() == targetPatronym;
        });

    if (it != students.end()) {
        students.erase(it, students.end());
        dtb.removeStudent(targetSurname, targetName, targetPatronym);
        std::cout << "������� � ��� '" << targetSurname << " " << targetName << " "
            << targetPatronym << "' ������." << std::endl;
    }
    else {
        std::cout << "������� � ��� '" << targetSurname << " " << targetName << " "
            << targetPatronym << "' �� ������. ��������� ������������ �����." << std::endl;
    }
}

void removeAllStudents(std::vector<Student>& students) {
    students.clear();
    std::cout << "��� �������� �������." << std::endl;
}

std::vector<Student> debtorList(const std::vector<Student>& students) {
    std::vector<Student> debtors;
    for (const auto& student : students) {
        if (student.getDebtor()) {
            debtors.push_back(student);
        }
    }
    return debtors;
}