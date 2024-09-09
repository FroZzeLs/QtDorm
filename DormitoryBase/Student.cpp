#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

student::student(const std::string& studentsSNP, int studentsAge, int studentsOPT,
    const std::string& studentsPhoneNumber, int activityType, int studentsBlock) : SNP(studentsSNP), age(studentsAge), OPT(studentsOPT),
    phoneNumber(studentsPhoneNumber), studActive(activityType), blockNumber(studentsBlock) {}
   
string student::getSNP() const {
    return SNP;
}

int student::getAge() const{
    return age;
}

int student::getOPT() const {
    return OPT;
}

string student::getPhoneNumber() const {
    return phoneNumber;
}

int student::getStudActive() const {
    return studActive;
}

int student::getBlockNumber() const {
    return blockNumber;
}

void student::setSNP(const string& studentsSNP) {
    SNP = studentsSNP;
}

void student::setAge(int studentsAge) {
    age = studentsAge;
}

void student::setOPT(int studentsOPT) {
    OPT = studentsOPT;
}

void student::setPhoneNumber(const string& studentsPhoneNumber) {
    phoneNumber = studentsPhoneNumber;
}

void student::setStudActive(int activityType) {
    studActive = activityType;
}

void student::setBlockNumber(int studentsBlock) {
    blockNumber = studentsBlock;
}

void student::inputInfo() {
    cout << "������� ��� ��������: ";
    cin.ignore();
    getline(cin, SNP);

    cout << "������� ����� �����: ";
    cin >> blockNumber;

    cout << "������� �������: ";
    cin >> age;

    cout << "������� ����� ��������: ";
    cin.ignore();
    getline(cin, phoneNumber);

    cout << "������� ������ �������� (0 - �� ��������, 1 - ���� ����������, 2 - ��): ";
    cin >> studActive;

    if (studActive != 0)
        OPT = 36;
    else {
        cout << "������� ���������� ������������ ����� ���: ";
        cin >> OPT;
    }

}

void student::printInfo() const {
    cout << "���: " << SNP << endl;
    cout << "����� �����: " << blockNumber << endl;
    cout << "�������: " << age << endl;
    cout << "������������ ���� ���: " << OPT << endl;
    cout << "����� ��������: " << phoneNumber << endl;
}