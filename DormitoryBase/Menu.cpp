#include "Menu.h"

void addNewStudents(StudentList& list, Database& dtb)
{
    std::cout << "Введите данные студента:" << std::endl;
    int newStudent = 0;
    do {
        Student buffer;
        buffer.inputInfo();
        list.insert(buffer);
        std::cout << "Вы желаете продолжить добавление студентов?\nНажмите 1, если да, 0 - если нет:";
        std::cin >> newStudent;
        std::cin.ignore();
    } while (newStudent != 0);
    dtb.addList(list);
    std::cout << "\nДанные успешно добавлены!" << std::endl;
}

void searchBySnp(const StudentList& list)
{
    std::string targetSurname;
    std::string targetName;
    std::string targetPatronym;
    std::cout << "Введите фамилию искомого студента: ";
    std::getline(std::cin, targetSurname);
    std::cout << "Введите имя искомого студента: ";
    std::getline(std::cin, targetName);
    std::cout << "Введите отчество искомого студента: ";
    std::getline(std::cin, targetPatronym);
    list.printStudentBySnp(list.searchStudent(targetSurname, targetName, targetPatronym));
}

void updateStudent(StudentList& list, const Database& dtb)
{
    std::string targetSurname;
    std::string targetName;
    std::string targetPatronym;
    std::cout << "Введите фамилию студента для редактирования: ";
    std::getline(std::cin, targetSurname);
    std::cout << "Введите имя студента: ";
    std::getline(std::cin, targetName);
    std::cout << "Введите отчество студента: ";
    std::getline(std::cin, targetPatronym);
    list.editStudent(targetSurname, targetName, targetPatronym, dtb);
}

void removeOneStudent(StudentList& list, const Database& dtb)
{
    std::string targetSurname;
    std::string targetName;
    std::string targetPatronym;
    std::cout << "Введите фамилию студента, которого вы хотите удалить: ";
    std::getline(std::cin, targetSurname);
    std::cout << "Введите имя студента: ";
    std::getline(std::cin, targetName);
    std::cout << "Введите отчество студента: ";
    std::getline(std::cin, targetPatronym);
    list.removeStudent(targetSurname, targetName, targetPatronym, dtb);
}