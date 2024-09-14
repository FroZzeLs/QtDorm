#include "Student.h"

student::student(const std::string& studentsSNP, int studentsAge,
    int studentsOPT, const std::string& studentsPhoneNumber,
    int activityType, int studentsBlock)
    : SNP(studentsSNP), age(studentsAge), OPT(studentsOPT),
    phoneNumber(studentsPhoneNumber), studActive(activityType),
    blockNumber(studentsBlock), Debtor(false) {}

std::string student::getSNP() const { 
    return SNP;
}

int student::getAge() const {
    return age; 
}

int student::getOPT() const { 
    return OPT;
}

std::string student::getPhoneNumber() const {
    return phoneNumber;
}

int student::getStudActive() const {
    return studActive; 
}

int student::getBlockNumber() const {
    return blockNumber;
}

bool student::getDebtor() const {
    return Debtor;
}

void student::setSNP(std::string_view studentsSNP) {
    SNP = studentsSNP;
}

void student::setAge(int studentsAge) {
    age = studentsAge; 
}

void student::setOPT(int studentsOPT) {
    OPT = studentsOPT;
}

void student::setPhoneNumber(std::string_view studentsPhoneNumber) {
    phoneNumber = studentsPhoneNumber;
}

void student::setStudActive(int activityType) {
    studActive = activityType;
}

void student::setBlockNumber(int studentsBlock) {
    blockNumber = studentsBlock;
}

void student::inputInfo() {
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
        Debtor = true;
    }
    else {
        Debtor = false;
    }
}

void student::printInfo() const {
    std::cout << "ФИО: " << SNP << std::endl;
    std::cout << "Номер блока: " << blockNumber << std::endl;
    std::cout << "Возраст: " << age << std::endl;
    std::cout << "Отработанные часы ОПТ: " << OPT << std::endl;
    std::cout << "Номер телефона: " << phoneNumber << std::endl;
    if (Debtor) {
        std::cout << "Долг ОПТ: " << normOfOPT() - OPT << std::endl;
    }
}