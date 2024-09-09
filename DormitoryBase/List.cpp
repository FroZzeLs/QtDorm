#include "List.h"
#include <iostream>
#include <string>

using namespace std;

Node::Node(student studentData) : data(studentData), next(nullptr) {}

StudentList::StudentList() : head(nullptr) {}

StudentList::~StudentList() {
    removeAllStudents();
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

void StudentList::printList() const {
    if (!head) {
        cout << "��������� � ���� ���!" << endl;
        return;
    }
    Node* current = head;
    int counter = 1;
    while (current) {
        cout << "������� " << counter << endl;
        current->data.printInfo();
        cout << endl;
        current = current->next;
        counter++;
    }
}

student* StudentList::searchStudent(const string& targetSNP) const {
    Node* current = head;
    while (current) {
        if (current->data.getSNP() == targetSNP)
            return &current->data;
        current = current->next;
    }
    return nullptr;
}

void StudentList::printStudentBySNP(student* target) const {
    if (!target) {
        cout << "������� � ������ ��� �� ������." << endl;
        return;
    }
    cout << "������� �������:" << endl;
    target->printInfo();
}

void StudentList::editStudent(const string& targetSNP) {
    student* foundStudent = searchStudent(targetSNP);
    if (foundStudent) {
        cout << "�������������� ���������� � ��������: " << targetSNP << endl;
        foundStudent->inputInfo();
    }
    else {
        cout << "������� � ��� '" << targetSNP << "' �� ������." << endl;
    }
}

void StudentList::removeStudent(const string& targetSNP) {
    if (!head) {
        cout << "��������� � ���� ���!" << endl;
        return;
    }

    if (head->data.getSNP() == targetSNP) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "������� � ��� '" << targetSNP << "' ������." << endl;
        return;
    }

    Node* current = head;
    while (current->next) {
        if (current->next->data.getSNP() == targetSNP) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
            cout << "������� � ��� '" << targetSNP << "' ������." << endl;
            return;
        }
        current = current->next;
    }
    cout << "������� � ��� '" << targetSNP << "' �� ������. ��������� ������������ �����." << endl;
}

void StudentList::removeAllStudents() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    cout << "��� �������� �������." << endl;
}