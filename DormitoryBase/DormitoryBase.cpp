#include "Header.h"

//using namespace std;
//
//class student {
//private:
//	string SNP;
//	int age;
//	int OPT;
//	string phoneNumber;
//	int studActive;		// 0 - не является активистом, 1 - Студсовет, 2 - ДД
//    int blockNumber;
//
//public:
//
//    student(): SNP(""), age(0), OPT(0), phoneNumber(""), studActive(0), blockNumber(0) {}
//    string getSNP() {
//        return SNP;
//    }
//
//    int getAge() {
//        return age;
//    }
//
//    int getOPT() {
//        return OPT;
//    }
//
//    string getPhoneNumber() {
//        return phoneNumber;
//    }
//
//    int getStudActive() {
//        return studActive;
//    }
//
//    int getBlockNumber() {
//        return blockNumber;
//    }
//
//    void setSNP(string studentsSNP) {
//        SNP = studentsSNP;
//    }
//
//    void setAge(int studentsAge) {
//        age = studentsAge;
//    }
//    
//    void setOPT(int studentsOPT) {
//        OPT = studentsOPT;
//    }
//
//    void setPhoneNumber(string studentsPhoneNumber) {
//        phoneNumber = studentsPhoneNumber;
//    }
//
//    void setStudActive(int activityType) {
//        studActive = activityType;
//    }
//
//    void setBlockNumber(int studentsBlock) {
//        blockNumber = studentsBlock;
//    }
//
//    void inputInfo() {
//        cout << "Введите ФИО студента: ";
//        cin.ignore();
//        getline(cin, SNP);
//
//        cout << "Введите номер блока: ";
//        cin >> blockNumber;
//
//        cout << "Введите возраст: ";
//        cin >> age;
//
//        cout << "Введите номер телефона: ";
//        cin.ignore();
//        getline(cin, phoneNumber);
//
//        cout << "Введите статус студента (0 - не активист, 1 - член студсовета, 2 - ДД): ";
//        cin >> studActive;
//        
//        if (studActive != 0)
//            OPT = 36;
//        else {
//            cout << "Введите количество отработанных часов ОПТ: ";
//            cin >> OPT;
//        }
//
//    }
//
//    void printInfo() {
//        cout << "ФИО: " << SNP << endl;
//        cout << "Номер блока: " << blockNumber << endl;
//        cout << "Возраст: " << age << endl;
//        cout << "Отработанные часы ОПТ: " << OPT << endl;
//        cout << "Номер телефона: " << phoneNumber << endl;
//    }
//};
//
//class Node {
//public:
//    student data;
//    Node* next;
//
//    explicit Node(student studentData) : data(studentData), next(NULL) {}
//};
//
//class StudentList {
//private:
//    Node* head;
//
//public:
//    StudentList() : head(NULL) {}
//
//    ~StudentList() {
//        while (head) {
//            Node* temp = head;
//            head = head->next;
//            delete temp;
//        }
//    }
//
//    void insert(student studentData) {
//        Node* newNode = new Node(studentData);
//        if (!head || head->data.getBlockNumber() > studentData.getBlockNumber()) {
//            newNode->next = head;
//            head = newNode;
//            return;
//        }
//
//        Node* current = head;
//        while (current->next && current->next->data.getBlockNumber() <= studentData.getBlockNumber())
//            current = current->next;
//        
//        newNode->next = current->next;
//        current->next = newNode;
//    }
//
//    void printList() {
//        if (!head) {
//            cout << "Студентов в базе нет!" << endl;
//            return;
//        }
//        Node* current = head;
//        int counter = 1;
//        while (current) {
//            cout << "Студент " << counter << endl;
//            current->data.printInfo();
//            cout << endl;
//            counter++;
//            current = current->next;
//        }
//    }
//
//    student* searchStudent(string targetSNP) {
//        Node* current = head;
//        while (current) {
//            if (current->data.getSNP() == targetSNP) 
//                return &current->data;
//            
//            current = current->next;
//        }
//        return NULL;
//    }
//
//    void printStudentBySNP(student* target) {
//        if (target == NULL)
//        {
//            cout << "Студент с данным ФИО не найден." << endl;
//            return;
//        }
//        cout << "Искомый студент:" << endl;
//        target->printInfo();
//    }
//
//    void editStudent(string targetSNP) {
//        student* foundStudent = searchStudent(targetSNP);
//        if (foundStudent) {
//            cout << "Редактирование информации о студенте: " << targetSNP << endl;
//            foundStudent->inputInfo();
//        }
//        else 
//            cout << "Студент с ФИО '" << targetSNP << "' не найден." << endl;
//        
//    }
//
//    void removeStudent(string targetSNP) {
//        if (!head) {
//            cout << "Студентов в базе нет!" << endl;
//            return;
//        }
//
//        
//        if (head->data.getSNP() == targetSNP) {
//            Node* temp = head;
//            head = head->next;
//            delete temp;
//            cout << "Студент с ФИО '" << targetSNP << "' удален." << endl;
//            return;
//        }
//
//        Node* current = head;
//        while (current->next) {
//            if (current->next->data.getSNP() == targetSNP) {
//                Node* temp = current->next;
//                current->next = current->next->next;
//                delete temp;
//                cout << "Студент с ФИО '" << targetSNP << "' удален." << endl;
//                return;
//            }
//            current = current->next;
//        }
//        cout << "Студент с ФИО '" << targetSNP << "' не найден. Проверьте правильность ввода." << endl;
//    }
//
//    void removeAllStudents() {
//        while (head) {
//            Node* temp = head;
//            head = head->next;
//            delete temp;
//        }
//        cout << "Все студенты удалены." << endl;
//    }
//};

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