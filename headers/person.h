#ifndef PERSON_H
#define PERSON_H

#include <QString>

class Person {
protected:
    QString surname;
    QString name;
    QString patronym;
    QString phoneNumber;
    int age;
public:
    Person(const QString& surname, const QString& name, const QString& patronym, const QString& phoneNumber, int age);

    QString getSurname() const;
    QString getName() const;
    QString getPatronym() const;
    QString getPhoneNumber() const;
    int getAge() const;

    void setSurname(QString studentsSurname);
    void setName(QString studentsName);
    void setPatronym(QString studentsPatronym);
    void setPhoneNumber(QString studentsPhoneNumber);
    void setAge(int studentsAge);
};

#endif // PERSON_H
