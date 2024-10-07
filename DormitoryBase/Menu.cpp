#include "Menu.h"

void addNewStudents(StudentList& list, Database& dtb)
{
    std::cout << "������� ������ ��������:" << std::endl;
    int newStudent = 0;
    do {
        Student buffer;
        buffer.inputInfo();
        list.insert(buffer);
        std::cout << "�� ������� ���������� ���������� ���������?\n������� 1, ���� ��, 0 - ���� ���:";
        std::cin >> newStudent;
        std::cin.ignore();
    } while (newStudent != 0);
    dtb.addList(list);
    std::cout << "\n������ ������� ���������!" << std::endl;
}

void searchBySnp(const StudentList& list)
{
    std::string targetSurname;
    std::string targetName;
    std::string targetPatronym;
    std::cout << "������� ������� �������� ��������: ";
    std::getline(std::cin, targetSurname);
    std::cout << "������� ��� �������� ��������: ";
    std::getline(std::cin, targetName);
    std::cout << "������� �������� �������� ��������: ";
    std::getline(std::cin, targetPatronym);
    list.printStudentBySnp(list.searchStudent(targetSurname, targetName, targetPatronym));
}

void updateStudent(StudentList& list, const Database& dtb)
{
    std::string targetSurname;
    std::string targetName;
    std::string targetPatronym;
    std::cout << "������� ������� �������� ��� ��������������: ";
    std::getline(std::cin, targetSurname);
    std::cout << "������� ��� ��������: ";
    std::getline(std::cin, targetName);
    std::cout << "������� �������� ��������: ";
    std::getline(std::cin, targetPatronym);
    list.editStudent(targetSurname, targetName, targetPatronym, dtb);
}

void removeOneStudent(StudentList& list, const Database& dtb)
{
    std::string targetSurname;
    std::string targetName;
    std::string targetPatronym;
    std::cout << "������� ������� ��������, �������� �� ������ �������: ";
    std::getline(std::cin, targetSurname);
    std::cout << "������� ��� ��������: ";
    std::getline(std::cin, targetName);
    std::cout << "������� �������� ��������: ";
    std::getline(std::cin, targetPatronym);
    list.removeStudent(targetSurname, targetName, targetPatronym, dtb);
}