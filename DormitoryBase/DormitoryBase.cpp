#include "Header.h"


int main() {
    system("chcp 1251");
    system("cls");
    int choice = 1;
    StudentList list;
    student buffer;
    while (choice != 0) {
        cout << "Выберите действие:\n1 - Добавить студента\n2 - Вывести информацию по всем студентам\n3 - Найти информацию по одному студенту\n4 - Изменить данные студента\n5 - Удалить студента по ФИО\n6 - Удалить всех студентов\n0 - завершить программу" << endl;
        cin >> choice;
        switch (choice) {
        case 1:{
            cout << "Введите данные студента:" << endl;
            int newStudent = 0;
            do {
                buffer.inputInfo();
                list.insert(buffer);
                cout << "Вы желаете продолжить добавление студентов?\nНажмите 1, если да, 0 - если нет:";
                cin >> newStudent;
            } while (newStudent != 0);
            cout << "\nДанные успешно добавлены!" << endl;
        }
            break;

        case 2:{
            cout << "\nВсе студенты:" << endl;
            list.printList();
        }
            break;
        

        case 3:{
            string target;
            cout << "Введите ФИО искомого студента: ";
            cin.ignore();
            getline(cin, target);
            list.printStudentBySNP(list.searchStudent(target));
        }
            break;

        case 4: {
            string target;
            cout << "Введите ФИО студента для редактирования: ";
            cin.ignore();
            getline(cin, target);
            list.editStudent(target);
        }
              break;

        case 5: {
            string target;
            cout << "Введите ФИО студента, которого вы хотите удалить: ";
            cin.ignore();
            getline(cin, target);
            list.removeStudent(target);
        }
              break;

        case 6:
            list.removeAllStudents();
            break;

        case 0:
            return 0;

        default:
            cout << "Ошибка ввода. Повторите ввод.";
            break;
        }
    }
	return 0;
}