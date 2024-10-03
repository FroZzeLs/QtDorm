#include "Student.h"

Student::Student(const std::string& studentsSNP, int studentsAge,
    int studentsOPT, const std::string& studentsPhoneNumber,
    int activityType, int studentsBlock)
    : SNP(studentsSNP), age(studentsAge), OPT(studentsOPT),
    phoneNumber(studentsPhoneNumber), studActive(activityType),
    blockNumber(studentsBlock) {}

std::string Student::getSNP() const { 
    return SNP;
}

int Student::getAge() const {
    return age; 
}

int Student::getOPT() const { 
    return OPT;
}

std::string Student::getPhoneNumber() const {
    return phoneNumber;
}

int Student::getStudActive() const {
    return studActive; 
}

int Student::getBlockNumber() const {
    return blockNumber;
}

bool Student::getDebtor() const {
    return debtor;
}

void Student::setSNP(std::string_view studentsSNP) {
    SNP = studentsSNP;
}

void Student::setAge(int studentsAge) {
    age = studentsAge; 
}

void Student::setOPT(int studentsOPT) {
    OPT = studentsOPT;
}

void Student::setPhoneNumber(std::string_view studentsPhoneNumber) {
    phoneNumber = studentsPhoneNumber;
}

void Student::setStudActive(int activityType) {
    studActive = activityType;
}

void Student::setBlockNumber(int studentsBlock) {
    blockNumber = studentsBlock;
}

void Student::inputInfo() {
    std::cout << "Введите ФИО студента: ";
    std::getline(std::cin, SNP);

    std::cout << "Введите номер блока: ";
    std::cin >> blockNumber;
    std::cin.ignore();

    std::cout << "Введите возраст: ";
    std::cin >> age;
    std::cin.ignore();

    std::cout << "Введите номер телефона: ";
    std::getline(std::cin, phoneNumber);

    std::cout << "Введите статус студента (0 - не активист, 1 - член студсовета, 2 - ДД): ";
    std::cin >> studActive;
    std::cin.ignore();

    if (studActive != 0) {
        OPT = 36;
    }
    else {
        std::cout << "Введите количество отработанных часов ОПТ: ";
        std::cin >> OPT;
        std::cin.ignore();
    }

    if (OPT < normOfOPT()) {
        debtor = true;
    }
    else {
        debtor = false;
    }
}

void Student::printInfo() const {
    std::cout << "ФИО: " << SNP << std::endl;
    std::cout << "Номер блока: " << blockNumber << std::endl;
    std::cout << "Возраст: " << age << std::endl;
    std::cout << "Отработанные часы ОПТ: " << OPT << std::endl;
    std::cout << "Номер телефона: " << phoneNumber << std::endl;
    if (debtor) {
        std::cout << "Долг ОПТ: " << normOfOPT() - OPT << std::endl;
    }
}