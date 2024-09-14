#pragma once
#include <iostream>
#include <string>
#include "Header.h"

class student {
private:
    std::string SNP;
    int age;
    int OPT;
    std::string phoneNumber;
    int studActive; // 0 - не является активистом, 1 - Студсовет, 2 - ДД
    int blockNumber;
    bool Debtor = false;

public:
    student(const std::string& studentsSNP = "", int studentsAge = 0,
        int studentsOPT = 0, const std::string& studentsPhoneNumber = "",
        int activityType = 0, int studentsBlock = 0);

    std::string getSNP() const;
    int getAge() const;
    int getOPT() const;
    bool getDebtor() const;
    std::string getPhoneNumber() const;
    int getStudActive() const;
    int getBlockNumber() const;

    void setSNP(std::string_view studentsSNP);
    void setAge(int studentsAge);
    void setOPT(int studentsOPT);
    void setPhoneNumber(std::string_view studentsPhoneNumber);
    void setStudActive(int activityType);
    void setBlockNumber(int studentsBlock);

    void inputInfo();
    void printInfo() const;
};