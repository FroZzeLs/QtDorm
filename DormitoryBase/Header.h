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

class Node {
public:
    student data;
    Node* next;

    explicit Node(student studentData);
};

class StudentList {
private:
    Node* head;

public:
    StudentList();

    ~StudentList();

    void insert(student studentData);

    void printList();

    student* searchStudent(string targetSNP);

    void printStudentBySNP(student* target);

    void editStudent(string targetSNP);

    void removeStudent(string targetSNP);

    void removeAllStudents();
};
