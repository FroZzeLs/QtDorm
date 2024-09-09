#include "Student.h"
#include <iostream>
#include <string>

student::student() : SNP(""), age(0), OPT(0), phoneNumber(""), studActive(0), blockNumber(0) {}

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

void student::setSNP(const std::string& studentsSNP) {
    SNP = studentsSNP;
}

void student::setAge(int studentsAge) {
    age = studentsAge;
}

void student::setOPT(int studentsOPT) {
    OPT = studentsOPT;
}

void student::setPhoneNumber(const std::string& studentsPhoneNumber) {
    phoneNumber = studentsPhoneNumber;
}

void student::setStudActive(int activityType) {
    studActive = activityType;
}

void student::setBlockNumber(int studentsBlock) {
    blockNumber = studentsBlock;
}

void student::inputInfo() {
    std::cout << "������� ��� ��������: ";
    std::cin.ignore();
    std::getline(std::cin, SNP);

    std::cout << "������� ����� �����: ";
    std::cin >> blockNumber;

    std::cout << "������� �������: ";
    std::cin >> age;

    std::cout << "������� ����� ��������: ";
    std::cin.ignore();
    std::getline(std::cin, phoneNumber);

    std::cout << "������� ������ �������� (0 - �� ��������, 1 - ���� ����������, 2 - ��): ";
    std::cin >> studActive;

    if (studActive != 0)
        OPT = 36;
    else {
        std::cout << "������� ���������� ������������ ����� ���: ";
        std::cin >> OPT;
    }
}

void student::printInfo() const {
    std::cout << "���: " << SNP << std::endl;
    std::cout << "����� �����: " << blockNumber << std::endl;
    std::cout << "�������: " << age << std::endl;
    std::cout << "������������ ���� ���: " << OPT << std::endl;
    std::cout << "����� ��������: " << phoneNumber << std::endl;
}