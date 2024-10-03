#pragma once
#include <iostream>
#include <string>
#include "Logic.h"

class Student {
private:
    std::string surname;
    std::string name;
    std::string patronym;
    std::string phoneNumber;
    int age;
    int opt;    
    int studActive; // 0 - не является активистом, 1 - Студсовет, 2 - ДД
    int blockNumber;
    bool debtor = false;

public:
    Student(const std::string& studentsSurname = "", 
        const std::string& studentsName = "", 
        const std::string& studentsPatronym = "", int studentsAge = 0,
        int studentsOPT = 0, const std::string& studentsPhoneNumber = "",
        int activityType = 0, int studentsBlock = 0);

    std::string getSurname() const;
    std::string getName() const;
    std::string getPatronym() const;
    std::string getPhoneNumber() const;
    int getAge() const;
    int getOpt() const;
    int getStudActive() const;
    int getBlockNumber() const;
    bool getDebtor() const;

    void setSurname(std::string_view studentsSurname);
    void setName(std::string_view studentsName);
    void setPatronym(std::string_view studentsPatronym);
    void setAge(int studentsAge);
    void setOpt(int studentsOPT);
    void setPhoneNumber(std::string_view studentsPhoneNumber);
    void setStudActive(int activityType);
    void setBlockNumber(int studentsBlock);

    void inputInfo();
    void printInfo() const;
};