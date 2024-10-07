#include "Student.h"

Student::Student(const std::string& studentsSurname,
    const std::string& studentsName,
    const std::string& studentsPatronym, const std::string& studentsPhoneNumber,
    int studentsAge, int studentsBlock, int activityType,
    int studentsOpt, bool isDebtor)
    : surname(studentsSurname), name(studentsName), patronym(studentsPatronym),
    phoneNumber(studentsPhoneNumber), age(studentsAge), blockNumber(studentsBlock),
    studActive(activityType), debtor(isDebtor), opt(studentsOpt) {}

std::string Student::getSurname() const { 
    return surname;
}

std::string Student::getName() const {
    return name;
}

std::string Student::getPatronym() const {
    return patronym;
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

void Student::setSurname(std::string_view studentsSurname) {
    surname = studentsSurname;
}

void Student::setName(std::string_view studentsName) {
    name = studentsName;
}

void Student::setPatronym(std::string_view studentsPatronym) {
    patronym = studentsPatronym;
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

void Student::setDebtor(bool isDebtor) {
    debtor = isDebtor;
}

void Student::inputInfo() {
    std::cout << "Введите фамилию студента: ";
    std::getline(std::cin, surname);

    std::cout << "Введите имя студента: ";
    std::getline(std::cin, name);

    std::cout << "Введите отчество студента: ";
    std::getline(std::cin, patronym);

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

    if (opt < normOfOpt()) {
        debtor = true;
    }
    else {
        debtor = false;
    }
}

void Student::printInfo() const {
    std::cout << "ФИО: " << surname << " " << name << " " << patronym << std::endl;
    std::cout << "Номер блока: " << blockNumber << std::endl;
    std::cout << "Возраст: " << age << std::endl;
    std::cout << "Отработанные часы ОПТ: " << opt << std::endl;
    std::cout << "Номер телефона: " << phoneNumber << std::endl;
    if (debtor) {
        std::cout << "Долг ОПТ: " << normOfOpt() - opt << std::endl;
    }
}

bool Student::operator==(const Student& other) const {
    return surname == other.surname &&
        name == other.name &&
        patronym == other.patronym &&
        phoneNumber == other.phoneNumber &&
        age == other.age &&
        blockNumber == other.blockNumber &&
        studActive == other.studActive &&
        opt == other.opt;
}

auto Student::operator<=>(const Student& other) const {
    return blockNumber <=> other.blockNumber;
}