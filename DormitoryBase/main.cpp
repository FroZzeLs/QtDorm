#include "List.h"
#include "Student.h"
#include "Logic.h"
#include <sqlite3.h>
#include "Database.h"
#include "Menu.h"

int main() {
    system("chcp 1251");
    system("cls");
    int choice = 1;
    StudentList list;
    Database dtb("Students.db");
    dtb.createTable();
    list = dtb.getAllStudents();

    while (choice != 0) {
        std::cout << "Выберите действие:\n1 - Добавить студента в БД\n2 - Вывести информацию по всем студентам\n3 - Найти информацию по одному студенту\n4 - Изменить данные студента\n5 - Удалить студента по ФИО\n6 - Удалить всех студентов\n7 - Вывести должников\n0 - завершить программу" << std::endl;
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
        case 1: {
            addNewStudents(list, dtb);
            break;
        }

        case 2: {
            std::cout << "\nВсе студенты:" << std::endl;
            list.printList();
            break;
        }

        case 3: {
            searchBySnp(list); break;
        }

        case 4: {
            updateStudent(list, dtb);
            break;
        }

        case 5: {
            removeOneStudent(list, dtb);
            break;
        }

        case 6:
            list.removeAllStudents();
            dtb.deleteAllStudents();
            break;

        case 7: {
            StudentList debtors = list.debtorList();
            if (debtors.getHead() == nullptr) {
                std::cout << "Должников нет!" << std::endl;
                break;
            }
            debtors.printList();
            break;
        }

        case 0:
            return 0;

        default:
            std::cout << "Ошибка ввода. Повторите ввод." << std::endl;
            break;
        }
    }
    return 0;
}
