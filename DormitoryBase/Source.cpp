#include "Header.h"

student::student() : SNP(""), age(0), OPT(0), phoneNumber(""), studActive(0), blockNumber(0) {}
   
string student::getSNP() {
    return SNP;
}

int student::getAge() {
    return age;
}

int student::getOPT() {
    return OPT;
}

string student::getPhoneNumber() {
    return phoneNumber;
}

int student::getStudActive() {
    return studActive;
}

int student::getBlockNumber() {
    return blockNumber;
}

void student::setSNP(string studentsSNP) {
    SNP = studentsSNP;
}

void student::setAge(int studentsAge) {
    age = studentsAge;
}

void student::setOPT(int studentsOPT) {
    OPT = studentsOPT;
}

void student::setPhoneNumber(string studentsPhoneNumber) {
    phoneNumber = studentsPhoneNumber;
}

void student::setStudActive(int activityType) {
    studActive = activityType;
}

void student::setBlockNumber(int studentsBlock) {
    blockNumber = studentsBlock;
}

void student::inputInfo() {
    cout << "Введите ФИО студента: ";
    cin.ignore();
    getline(cin, SNP);

    cout << "Введите номер блока: ";
    cin >> blockNumber;

    cout << "Введите возраст: ";
    cin >> age;

    cout << "Введите номер телефона: ";
    cin.ignore();
    getline(cin, phoneNumber);

    cout << "Введите статус студента (0 - не активист, 1 - член студсовета, 2 - ДД): ";
    cin >> studActive;

    if (studActive != 0)
        OPT = 36;
    else {
        cout << "Введите количество отработанных часов ОПТ: ";
        cin >> OPT;
    }

}

void student::printInfo() {
    cout << "ФИО: " << SNP << endl;
    cout << "Номер блока: " << blockNumber << endl;
    cout << "Возраст: " << age << endl;
    cout << "Отработанные часы ОПТ: " << OPT << endl;
    cout << "Номер телефона: " << phoneNumber << endl;
}

Node::Node(student studentData) : data(studentData), next(NULL) {}

StudentList::StudentList() : head(NULL) {}

StudentList::~StudentList() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void StudentList::insert(student studentData) {
    Node* newNode = new Node(studentData);
    if (!head || head->data.getBlockNumber() > studentData.getBlockNumber()) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* current = head;
    while (current->next && current->next->data.getBlockNumber() <= studentData.getBlockNumber())
        current = current->next;

    newNode->next = current->next;
    current->next = newNode;
}

void StudentList::printList() {
    if (!head) {
        cout << "Студентов в базе нет!" << endl;
        return;
    }
    Node* current = head;
    int counter = 1;
    while (current) {
        cout << "Студент " << counter << endl;
        current->data.printInfo();
        cout << endl;
        counter++;
        current = current->next;
    }
}

student* StudentList::searchStudent(string targetSNP) {
    Node* current = head;
    while (current) {
        if (current->data.getSNP() == targetSNP)
            return &current->data;

        current = current->next;
    }
    return NULL;
}

void StudentList::printStudentBySNP(student* target) {
    if (target == NULL)
    {
        cout << "Студент с данным ФИО не найден." << endl;
        return;
    }
    cout << "Искомый студент:" << endl;
    target->printInfo();
}

void StudentList::editStudent(string targetSNP) {
    student* foundStudent = searchStudent(targetSNP);
    if (foundStudent) {
        cout << "Редактирование информации о студенте: " << targetSNP << endl;
        foundStudent->inputInfo();
    }
    else
        cout << "Студент с ФИО '" << targetSNP << "' не найден." << endl;

}

void StudentList::removeStudent(string targetSNP) {
    if (!head) {
        cout << "Студентов в базе нет!" << endl;
        return;
    }


    if (head->data.getSNP() == targetSNP) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Студент с ФИО '" << targetSNP << "' удален." << endl;
        return;
    }

    Node* current = head;
    while (current->next) {
        if (current->next->data.getSNP() == targetSNP) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
            cout << "Студент с ФИО '" << targetSNP << "' удален." << endl;
            return;
        }
        current = current->next;
    }
    cout << "Студент с ФИО '" << targetSNP << "' не найден. Проверьте правильность ввода." << endl;
}

void StudentList::removeAllStudents() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    cout << "Все студенты удалены." << endl;
}
