#include "List.h"

Node* StudentList::getHead() {
    return head;
}

void StudentList::insert(const Student& studentData) {
    auto newNode = new Node(studentData);
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
        std::cout << "��������� � ���� ���!" << std::endl;
        return;
    }
    Node* current = head;
    int counter = 1;
    while (current) {
        std::cout << "������� " << counter << std::endl;
        current->data.printInfo();
        std::cout << std::endl;
        current = current->next;
        counter++;
    }
}

Student* StudentList::searchStudent( std::string_view targetSnp) const {
    Node* current = head;
    while (current) {
        if (current->data.getSnp() == targetSnp)
            return &current->data;
        current = current->next;
    }
    return nullptr;
}

void StudentList::printStudentBySNP(const Student* target) const {
    if (!target) {
        std::cout << "������� � ������ ��� �� ������." << std::endl;
        return;
    }
    std::cout << "������� �������:" << std::endl;
    target->printInfo();
}

void StudentList::editStudent(const std::string& targetSnp) const {
    Student* foundedStudent = searchStudent(targetSnp);
    if (foundedStudent) {
        std::cout << "�������������� ���������� � ��������: " << targetSnp << std::endl;
        foundedStudent->inputInfo();
    }
    else {
        std::cout << "������� � ��� '" << targetSnp << "' �� ������." << std::endl;
    }
}

void StudentList::removeStudent(const std::string& targetSnp) {
    if (!head) {
        std::cout << "��������� � ���� ���!" << std::endl;
        return;
    }

    if (head->data.getSnp() == targetSnp) {
        Node* temp = head;
        head = head->next;
        delete temp;
        std::cout << "������� � ��� '" << targetSnp << "' ������." << std::endl;
        return;
    }

    Node* current = head;
    while (current->next) {
        if (current->next->data.getSnp() == targetSnp) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
            std::cout << "������� � ��� '" << targetSnp << "' ������." << std::endl;
            return;
        }
        current = current->next;
    }
    std::cout << "������� � ��� '" << targetSnp << "' �� ������. ��������� ������������ �����." << std::endl;
}

void StudentList::removeAllStudents() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    std::cout << "��� �������� �������." << std::endl;
}

StudentList StudentList::debtorList() const {
    StudentList debtorList;
    Node* current = head;

    while (current != nullptr) {
        if (current->data.getDebtor()) {
            debtorList.insert(current->data);
        }
        current = current->next;
    }

    return debtorList;
}