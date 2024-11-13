#include "./../headers/person.h"

Person::Person(const QString& surname, const QString& name, const QString& patronym, const QString& phoneNumber, int age)
    : surname(surname), name(name), patronym(patronym), phoneNumber(phoneNumber), age(age) {}

QString Person::getSurname() const {
    return surname;
}

QString Person::getName() const {
    return name;
}

QString Person::getPatronym() const {
    return patronym;
}

int Person::getAge() const {
    return age;
}

QString Person::getPhoneNumber() const {
    return phoneNumber;
}

void Person::setSurname(QString studentsSurname) {
    surname = studentsSurname;
}

void Person::setName(QString studentsName) {
    name = studentsName;
}

void Person::setPatronym(QString studentsPatronym) {
    patronym = studentsPatronym;
}

void Person::setAge(int studentsAge) {
    age = studentsAge;
}

void Person::setPhoneNumber(QString studentsPhoneNumber) {
    phoneNumber = studentsPhoneNumber;
}
