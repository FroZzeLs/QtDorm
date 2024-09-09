#pragma once
#include <iostream>
#include <string>

using namespace std;

class student {
private:
    string SNP;
    int age;
    int OPT;
    string phoneNumber;
    int studActive;		// 0 - не является активистом, 1 - Студсовет, 2 - ДД
    int blockNumber;

public:

    student();
    string getSNP();

    int getAge();

    int getOPT();

    string getPhoneNumber();

    int getStudActive();

    int getBlockNumber();

    void setSNP(string studentsSNP);

    void setAge(int studentsAge);

    void setOPT(int studentsOPT);

    void setPhoneNumber(string studentsPhoneNumber);

    void setStudActive(int activityType);

    void setBlockNumber(int studentsBlock);

    void inputInfo();

    void printInfo();
};