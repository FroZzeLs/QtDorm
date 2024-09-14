#include "List.h"
#include "Student.h"
#include "Header.h"

int main() {
    system("chcp 1251");
    system("cls");

    int choice = 1;
    StudentList list;
    student buffer;

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
            std::string target;
            std::cout << "Введите ФИО искомого студента: ";
            std::getline(std::cin, target);
            list.printStudentBySNP(list.searchStudent(target));
            break;
        }

        case 4: {
            std::string target;
            std::cout << "Введите ФИО студента для редактирования: ";
            std::getline(std::cin, target);
            list.editStudent(target);
            break;
        }

        case 5: {
            std::string target;
            std::cout << "Введите ФИО студента, которого вы хотите удалить: ";
            std::getline(std::cin, target);
            list.removeStudent(target);
            break;
        }

        case 6:
            list.removeAllStudents();
            break;

        case 7:
            list.DebtorList().printList();
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