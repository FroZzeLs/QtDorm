#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

student::student() : SNP(""), age(0), OPT(0), phoneNumber(""), studActive(0), blockNumber(0) {}
   
string student::getSNP() {
    return SNP;
}

int student::getAge() {
    return age;
}

int student::getOPT() {
    return OPT;
}

string student::getPhoneNumber() {
    return phoneNumber;
}

int student::getStudActive() {
    return studActive;
}

int student::getBlockNumber() {
    return blockNumber;
}

void student::setSNP(string studentsSNP) {
    SNP = studentsSNP;
}

void student::setAge(int studentsAge) {
    age = studentsAge;
}

void student::setOPT(int studentsOPT) {
    OPT = studentsOPT;
}

void student::setPhoneNumber(string studentsPhoneNumber) {
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

void student::printInfo() {
    cout << "���: " << SNP << endl;
    cout << "����� �����: " << blockNumber << endl;
    cout << "�������: " << age << endl;
    cout << "������������ ���� ���: " << OPT << endl;
    cout << "����� ��������: " << phoneNumber << endl;
}