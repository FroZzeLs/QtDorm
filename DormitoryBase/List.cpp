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
        std::cout << "Студентов в базе нет!" << std::endl;
        return;
    }
    Node* current = head;
    int counter = 1;
    while (current) {
        std::cout << "Студент " << counter << std::endl;
        current->data.printInfo();
        std::cout << std::endl;
        current = current->next;
        counter++;
    }
}

Student* StudentList::searchStudent( std::string_view targetSurname, std::string_view targetName, std::string_view targetPatronym) const {
    Node* current = head;
    while (current) {
        if (current->data.getSurname() == targetSurname && current->data.getName() == targetName && current->data.getPatronym() == targetPatronym)
            return &current->data;
        current = current->next;
    }
    return nullptr;
}

void StudentList::printStudentBySNP(const Student* target) const {
    if (!target) {
        std::cout << "Студент с данным ФИО не найден." << std::endl;
        return;
    }
    std::cout << "Искомый студент:" << std::endl;
    target->printInfo();
}

void StudentList::editStudent(const std::string& targetSurname, const std::string& targetName, const std::string& targetPatronym) const {
    Student* foundedStudent = searchStudent(targetSurname, targetName, targetPatronym);
    if (foundedStudent) {
        std::cout << "Редактирование информации о студенте: " << targetSurname << " " << targetName << " " << targetPatronym << std::endl;
        foundedStudent->inputInfo();
    }
    else {
        std::cout << "Студент с ФИО '" << targetSurname << " " << targetName << " " << targetPatronym << "' не найден." << std::endl;
    }
}

void StudentList::removeStudent(const std::string& targetSurname, const std::string& targetName, const std::string& targetPatronym) {
    if (!head) {
        std::cout << "Студентов в базе нет!" << std::endl;
        return;
    }

    if (head->data.getSurname() == targetSurname && head->data.getName() == targetName && head->data.getPatronym() == targetPatronym) {
        Node* temp = head;
        head = head->next;
        delete temp;
        std::cout << "Студент с ФИО '" << targetSurname << " " << targetName << " " << targetPatronym << "' удален." << std::endl;
        return;
    }

    Node* current = head;
    while (current->next) {
        if (current->next->data.getSurname() == targetSurname && current->next->data.getName() == targetName && current->next->data.getPatronym() == targetPatronym) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
            std::cout << "Студент с ФИО '" << targetSurname << " " << targetName << " " << targetPatronym << "' удален." << std::endl;
            return;
        }
        current = current->next;
    }
    std::cout << "Студент с ФИО '" << targetSurname << " " << targetName << " " << targetPatronym << "' не найден. Проверьте правильность ввода." << std::endl;
}

void StudentList::removeAllStudents() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    std::cout << "Все студенты удалены." << std::endl;
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