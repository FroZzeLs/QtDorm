#include "List.h"
#include "Student.h"
#include "Logic.h"
#include <sqlite3.h>

int main() {
    system("chcp 1251");
    system("cls");

    int choice = 1;
    StudentList list;
    Student buffer;

    while (choice != 0) {
        std::cout << "Выберите действие:\n1 - Добавить студента\n2 - Вывести информацию по всем студентам\n3 - Найти информацию по одному студенту\n4 - Изменить данные студента\n5 - Удалить студента по ФИО\n6 - Удалить всех студентов\n7 - Вывести должников\n0 - завершить программу" << std::endl;
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
        case 1: {
            std::cout << "Введите данные студента:" << std::endl;
            int newStudent = 0;
            do {
                buffer.inputInfo();
                list.insert(buffer);
                std::cout << "Вы желаете продолжить добавление студентов?\nНажмите 1, если да, 0 - если нет:";
                std::cin >> newStudent;
                std::cin.ignore();
            } while (newStudent != 0);
            std::cout << "\nДанные успешно добавлены!" << std::endl;
            break;
        }

        case 2: {
            std::cout << "\nВсе студенты:" << std::endl;
            list.printList();
            break;
        }

        case 3: {
            std::string targetSurname;
            std::string targetName;
            std::string targetPatronym;
            std::cout << "Введите фамилию искомого студента: ";
            std::getline(std::cin, targetSurname);
            std::cout << "Введите имя искомого студента: ";
            std::getline(std::cin, targetName);
            std::cout << "Введите отчество искомого студента: ";
            std::getline(std::cin, targetPatronym);
            list.printStudentBySNP(list.searchStudent(targetSurname, targetName, targetPatronym));
            break;
        }

        case 4: {
            std::string targetSurname;
            std::string targetName;
            std::string targetPatronym;
            std::cout << "Введите фамилию студента для редактирования: ";
            std::getline(std::cin, targetSurname);
            std::cout << "Введите имя студента: ";
            std::getline(std::cin, targetName);
            std::cout << "Введите отчество студента: ";
            std::getline(std::cin, targetPatronym);
            list.editStudent(targetSurname, targetName, targetPatronym);
            break;
        }

        case 5: {
            std::string targetSurname;
            std::string targetName;
            std::string targetPatronym;
            std::cout << "Введите фамилию студента, которого вы хотите удалить: ";
            std::getline(std::cin, targetSurname);
            std::cout << "Введите имя студента: ";
            std::getline(std::cin, targetName);
            std::cout << "Введите отчество студента: ";
            std::getline(std::cin, targetPatronym);
            list.removeStudent(targetSurname, targetName, targetPatronym);
            break;
        }

        case 6:
            list.removeAllStudents();
            break;

        case 7:
            list.debtorList().printList();
            break;

        case 0:
            return 0;

        default:
            std::cout << "Ошибка ввода. Повторите ввод." << std::endl;
            break;
        }
    }
    return 0;
}