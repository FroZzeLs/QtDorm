#ifndef STUDENTRESIDENT_H
#define STUDENTRESIDENT_H

#include "resident.h"
#include "person.h"

class StudentResident : public Person, public Resident {
private:
    int studentId;
public:
    StudentResident(int studentId, const QString& surname, const QString& name, const QString& patronym,
                    const QString& phoneNumber, int age, int blockNumber, int studActive, int opt);
    StudentResident();
    int getId() const;
    void setId(int id);
    bool operator==(const StudentResident& other) const;
    bool operator<(const StudentResident& other) const;
};

#endif // STUDENTRESIDENT_H
