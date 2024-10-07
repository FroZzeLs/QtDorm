#include "Student.h"
#include "Menu.h"

int main() {
    system("chcp 1251");
    system("cls");
    int choice = 1;
    Database dtb("Students.db");
    dtb.createTable();
    std::vector<Student> list(dtb.getAllStudents());

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
            printList(list);
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
            removeAllStudents(list);
            dtb.deleteAllStudents();
            break;

        case 7: {
            if (std::vector<Student> debtors = debtorList(list); debtors.empty()) {
                std::cout << "Должников нет!" << std::endl;
                break;
            }
            else {
                printList(debtors);
            }
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
