#include "./../headers/studentresident.h"

StudentResident::StudentResident(int studentId, const QString& surname, const QString& name, const QString& patronym,
                                 const QString& phoneNumber, int age, int blockNumber, int studActive, int opt)
    : studentId(studentId), Person(surname, name, patronym, phoneNumber, age),
    Resident(blockNumber, studActive, opt) {}

StudentResident::StudentResident() : Person("", "", "", "", -1), Resident(-1, -1, -1) {}

int StudentResident::getId()const{
    return studentId;
}

void StudentResident::setId(int id){
    studentId = id;
}

bool StudentResident::operator==(const StudentResident& other) const {
    return surname == other.surname &&
           name == other.name &&
           patronym == other.patronym &&
           phoneNumber == other.phoneNumber &&
           age == other.age &&
           opt == other.opt &&
           studActive == other.studActive &&
           blockNumber == other.blockNumber;
}

bool StudentResident::operator<(const StudentResident& other) const {
    return this->getBlockNumber() < other.getBlockNumber();
}
