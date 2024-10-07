#include "Menu.h"

void addNewStudents(std::vector<Student>& list, Database& dtb)
{
    std::cout << "������� ������ ��������:" << std::endl;
    int newStudent = 0;
    do {
        Student buffer;
        buffer.inputInfo();
        list += buffer;
        std::cout << "�� ������� ���������� ���������� ���������?\n������� 1, ���� ��, 0 - ���� ���:";
        std::cin >> newStudent;
        std::cin.ignore();
    } while (newStudent != 0);
    dtb.addList(list);
    std::cout << "\n������ ������� ���������!" << std::endl;
}

void searchBySnp(std::vector<Student>& list)
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
    printStudentBySnp(searchStudent(list, targetSurname, targetName, targetPatronym));
}

void updateStudent(std::vector<Student>& list, Database& dtb)
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
    editStudent(list, targetSurname, targetName, targetPatronym, dtb);
}

void removeOneStudent(std::vector<Student>& list, Database& dtb)
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
    removeStudent(list, targetSurname, targetName, targetPatronym, dtb);
}