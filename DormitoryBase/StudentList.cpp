#include "StudentList.h"

bool checkForOriginality(const std::vector<Student>& students, const Student& student) {
    return std::ranges::any_of(students, [&](const Student& currentStudent) {
        return student == currentStudent;});
}

void printList(const std::vector<Student>& students) {
    if (students.empty()) {
        std::cout << "Студентов в базе нет!" << std::endl;
        return;
    }
    for (size_t i = 0; i < students.size(); ++i) {
        std::cout << "Студент " << (i + 1) << std::endl;
        students[i].printInfo();
        std::cout << std::endl;
    }
}

Student* searchStudent(std::vector<Student>& students,
    std::string_view targetSurname,
    std::string_view targetName,
    std::string_view targetPatronym) {
    auto it = std::ranges::find_if(students.begin(), students.end(), [&](const Student& student) {
        return student.getSurname() == targetSurname &&
            student.getName() == targetName &&
            student.getPatronym() == targetPatronym;
        });
    return it != students.end() ? std::to_address(it) : nullptr;
}

void printStudentBySnp(const Student* target) {
    if (!target) {
        std::cout << "Студент с данным ФИО не найден." << std::endl;
        return;
    }
    std::cout << "Искомый студент:" << std::endl;
    target->printInfo();
}

void editStudent(std::vector<Student>& students, const std::string& targetSurname,
    const std::string& targetName, const std::string& targetPatronym, Database& dtb) {
    Student* foundedStudent = searchStudent(students, targetSurname, targetName, targetPatronym);
    if (foundedStudent) {
        Student oldInfo = *foundedStudent;
        std::cout << "Редактирование информации о студенте: " << targetSurname << " "
            << targetName << " " << targetPatronym << std::endl;
        foundedStudent->inputInfo(); // Предполагается, что функция ввода информации реализована в классе Student
        // Ваша логика обновления данных в базе данных (если необходимо)
        dtb.updateStudent(oldInfo, *foundedStudent);
    }
    else {
        std::cout << "Студент с ФИО '" << targetSurname << " " << targetName << " "
            << targetPatronym << "' не найден." << std::endl;
    }
}

void removeStudent(std::vector<Student>& students, const std::string& targetSurname,
    const std::string& targetName, const std::string& targetPatronym, Database& dtb) {
    auto it = std::ranges::remove_if(students.begin(), students.end(), [&](const Student& student) {
        return student.getSurname() == targetSurname &&
            student.getName() == targetName &&
            student.getPatronym() == targetPatronym;});

    if (it.begin() != it.end()) {
        students.erase(it.begin(), it.end());
        dtb.removeStudent(targetSurname, targetName, targetPatronym);
        std::cout << "Студент с ФИО '" << targetSurname << " " << targetName << " "
            << targetPatronym << "' удален." << std::endl;
    }
    else {
        std::cout << "Студент с ФИО '" << targetSurname << " " << targetName << " "
            << targetPatronym << "' не найден. Проверьте правильность ввода." << std::endl;
    }
}

void removeAllStudents(std::vector<Student>& students) {
    students.clear();
    std::cout << "Все студенты удалены." << std::endl;
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

std::vector<Student>& operator+=(std::vector<Student>& students, const Student& studentData) {
    if (!students.empty() && std::ranges::find(students.begin(), students.end(), studentData) != students.end()) {
        return students;
    }

    students.push_back(studentData);
    std::ranges::sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
        return a.getBlockNumber() < b.getBlockNumber();
        });
    return students;
}