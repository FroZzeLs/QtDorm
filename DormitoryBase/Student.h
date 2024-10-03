#pragma once
#include <iostream>
#include <string>
#include "Logic.h"

class Student {
private:
    std::string snp;
    std::string phoneNumber;
    int age;
    int opt;
    int studActive; // 0 - не является активистом, 1 - Студсовет, 2 - ДД
    int blockNumber;
    bool debtor = false;

public:
    Student(const std::string& studentsSNP = "", int studentsAge = 0,
        int studentsOPT = 0, const std::string& studentsPhoneNumber = "",
        int activityType = 0, int studentsBlock = 0);

    std::string getSnp() const;
    std::string getPhoneNumber() const;
    int getAge() const;
    int getOpt() const;
    int getStudActive() const;
    int getBlockNumber() const;
    bool getDebtor() const;

    void setSnp(std::string_view studentsSNP);
    void setAge(int studentsAge);
    void setOpt(int studentsOPT);
    void setPhoneNumber(std::string_view studentsPhoneNumber);
    void setStudActive(int activityType);
    void setBlockNumber(int studentsBlock);

    void inputInfo();
    void printInfo() const;
};