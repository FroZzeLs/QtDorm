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
    std::cout << "������� ��� ��������: ";
    std::getline(std::cin, SNP);

    std::cout << "������� ����� �����: ";
    std::cin >> blockNumber;
    std::cin.ignore();

    std::cout << "������� �������: ";
    std::cin >> age;
    std::cin.ignore();

    std::cout << "������� ����� ��������: ";
    std::getline(std::cin, phoneNumber);

    std::cout << "������� ������ �������� (0 - �� ��������, 1 - ���� ����������, 2 - ��): ";
    std::cin >> studActive;
    std::cin.ignore();

    if (studActive != 0) {
        OPT = 36;
    }
    else {
        std::cout << "������� ���������� ������������ ����� ���: ";
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
    std::cout << "���: " << SNP << std::endl;
    std::cout << "����� �����: " << blockNumber << std::endl;
    std::cout << "�������: " << age << std::endl;
    std::cout << "������������ ���� ���: " << OPT << std::endl;
    std::cout << "����� ��������: " << phoneNumber << std::endl;
    if (debtor) {
        std::cout << "���� ���: " << normOfOPT() - OPT << std::endl;
    }
}