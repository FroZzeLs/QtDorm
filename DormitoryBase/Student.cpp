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
    cout << "Введите ФИО студента: ";
    cin.ignore();
    getline(cin, SNP);

    cout << "Введите номер блока: ";
    cin >> blockNumber;

    cout << "Введите возраст: ";
    cin >> age;

    cout << "Введите номер телефона: ";
    cin.ignore();
    getline(cin, phoneNumber);

    cout << "Введите статус студента (0 - не активист, 1 - член студсовета, 2 - ДД): ";
    cin >> studActive;

    if (studActive != 0)
        OPT = 36;
    else {
        cout << "Введите количество отработанных часов ОПТ: ";
        cin >> OPT;
    }

}

void student::printInfo() {
    cout << "ФИО: " << SNP << endl;
    cout << "Номер блока: " << blockNumber << endl;
    cout << "Возраст: " << age << endl;
    cout << "Отработанные часы ОПТ: " << OPT << endl;
    cout << "Номер телефона: " << phoneNumber << endl;
}