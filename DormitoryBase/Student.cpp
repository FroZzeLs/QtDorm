#include "Student.h"

Student::Student(const std::string& studentsSnp, int studentsAge,
    int studentsOpt, const std::string& studentsPhoneNumber,
    int activityType, int studentsBlock)
    : snp(studentsSnp), age(studentsAge), opt(studentsOpt),
    phoneNumber(studentsPhoneNumber), studActive(activityType),
    blockNumber(studentsBlock) {}

std::string Student::getSnp() const { 
    return snp;
}

int Student::getAge() const {
    return age; 
}

int Student::getOpt() const { 
    return opt;
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

void Student::setSnp(std::string_view studentsSnp) {
    snp = studentsSnp;
}

void Student::setAge(int studentsAge) {
    age = studentsAge; 
}

void Student::setOpt(int studentsOpt) {
    opt = studentsOpt;
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
    std::getline(std::cin, snp);

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
        opt = 36;
    }
    else {
        std::cout << "Введите количество отработанных часов ОПТ: ";
        std::cin >> opt;
        std::cin.ignore();
    }

    if (opt < normOfOPT()) {
        debtor = true;
    }
    else {
        debtor = false;
    }
}

void Student::printInfo() const {
    std::cout << "ФИО: " << snp << std::endl;
    std::cout << "Номер блока: " << blockNumber << std::endl;
    std::cout << "Возраст: " << age << std::endl;
    std::cout << "Отработанные часы ОПТ: " << opt << std::endl;
    std::cout << "Номер телефона: " << phoneNumber << std::endl;
    if (debtor) {
        std::cout << "Долг ОПТ: " << normOfOPT() - opt << std::endl;
    }
}