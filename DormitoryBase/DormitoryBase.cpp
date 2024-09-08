#include <iostream>
#include <string>

using namespace std;

class student {
private:
	string SNP;
	int age;
	int OPT;
	string phoneNumber;
	int studActive;		// 0 - не является активистом, 1 - Студсовет, 2 - ДД
    int blockNumber;

public:

    string getSNP() {
        return SNP;
    }

    int getAge() {
        return age;
    }

    int getOPT() {
        return OPT;
    }

    string getPhoneNumber() {
        return phoneNumber;
    }

    int getStudActive() {
        return studActive;
    }

    int getBlockNumber() {
        return blockNumber;
    }

    void setSNP(string studentsSNP) {
        SNP = studentsSNP;
    }

    void setAge(int studentsAge) {
        age = studentsAge;
    }
    
    void setOPT(int studentsOPT) {
        OPT = studentsOPT;
    }

    void setPhoneNumber(string studentsPhoneNumber) {
        phoneNumber = studentsPhoneNumber;
    }

    void setStudActive(int activityType) {
        studActive = activityType;
    }

    void setBlockNumber(int studentsBlock) {
        blockNumber = studentsBlock;
    }

    void inputInfo() {
        cout << "Введите ФИО студента: ";
        getline(cin, SNP);

        cout << "Введите номер блока: ";
        cin >> blockNumber;

        cout << "Введите возраст: ";
        cin >> age;

        cout << "Введите количество отработанных часов ОПТ: ";
        cin >> OPT;

        cout << "Введите номер телефона: ";
        cin.ignore();
        getline(cin, phoneNumber);

        cout << "Введите статус студента (0 - не активист, 1 - член студсовета, 2 - ДД): ";
        cin >> studActive;

    }

    void printInfo() {
        cout << "ФИО: " << SNP << endl;
        cout << "Номер блока: " << blockNumber;
        cout << "Возраст: " << age << endl;
        cout << "Отработанные часы ОПТ: " << OPT << endl;
        cout << "Номер телефона: " << phoneNumber << endl;
    }
};

//class node {
//public:
//    student data;
//    node* next;
//};
//
//class stack {
//public:
//    void push(student data) {
//        node* newNode = new node(data); // Создаем новый узел
//        newNode->next = top; // Указываем следующий узел
//        top = newNode; // Обновляем верхний элемент
//    }
//
//    Student pop() {
//        if (isEmpty()) {
//            cout << "Стек пуст!" << endl;
//            return Student(); // Возвращаем пустого студента
//        }
//        Node* temp = top; // Сохраняем указатель на верхний узел
//        Student poppedStudent = top->data; // Сохраняем данные
//        top = top->next; // Перемещаем верхний указатель вниз
//        delete temp; // Удаляем верхний узел
//        return poppedStudent; // Возвращаем данные
//    }
//
//    void printUpper() {
//        if (isEmpty()) {
//            cout << "Стек пуст!" << endl;
//            return;
//        }
//        top->data.displayInfo(); // Печатаем информацию о верхнем студенте
//    }
//
//};


int main() {
    setlocale(LC_ALL, "RUS");
    student Sergey;

	

	return 0;
}