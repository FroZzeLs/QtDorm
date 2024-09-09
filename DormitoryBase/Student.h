#pragma once

#include <iostream>
#include <string>

class student {
private:
    std::string SNP;
    int age;
    int OPT;
    std::string phoneNumber;
    int studActive; // 0 - не является активистом, 1 - Студсовет, 2 - ДД
    int blockNumber;

public:
    student(const std::string& studentsSNP, int studentsAge, int studentsOPT,
        const std::string& studentsPhoneNumber, int activityType, int studentsBlock) : SNP(studentsSNP), age(studentsAge), OPT(studentsOPT),
        phoneNumber(studentsPhoneNumber) {}

    std::string getSNP() const;
    int getAge() const;
    int getOPT() const;
    std::string getPhoneNumber() const;
    int getStudActive() const;
    int getBlockNumber() const;

    void setSNP(const std::string& studentsSNP);
    void setAge(int studentsAge);
    void setOPT(int studentsOPT);
    void setPhoneNumber(const std::string& studentsPhoneNumber);
    void setStudActive(int activityType);
    void setBlockNumber(int studentsBlock);

    void inputInfo();
    void printInfo() const;
};