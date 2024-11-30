#include "./../headers/validateinput.h"
#include "./../headers/invalidnameexception.h"
#include "./../headers/invalidnumberexception.h"
#include "./../headers/invalidphonenumberexception.h"

void validateInput(const QString& surname, const QString& name, const QString& patronym,
                   const QString& phoneNumber, const QString& age,
                   const QString& blockNumber, const QString& opt) {
    QRegularExpression nameRegex("^[A-ZА-ЯЁ][a-zA-Zа-яё]*(?:-[A-ZА-ЯЁ][a-zA-Zа-яё]*)?$");
    if (!nameRegex.match(surname).hasMatch() ||
        !nameRegex.match(name).hasMatch() ||
        !patronym.isEmpty() && !nameRegex.match(patronym).hasMatch()) {
        throw InvalidNameException();
    }

    QRegularExpression phoneRegex("^[\\d \\+\\(\\)\\-]+$");
    if (!phoneRegex.match(phoneNumber).hasMatch()) {
        throw InvalidPhoneNumberException();
    }

    QRegularExpression numberRegex("^[0-9]+$");
    if (!numberRegex.match(age).hasMatch() ||
        !numberRegex.match(blockNumber).hasMatch() ||
        !numberRegex.match(opt).hasMatch()) {
        throw InvalidNumberException();
    }
}

void validateInput(const QString& surname, const QString& name, const QString& patronym,
                   const QString& phoneNumber, const QString& age,
                   const QString& blockNumber) {
    QRegularExpression nameRegex("^[A-ZА-ЯЁ][a-zA-Zа-яё]*$");
    if (!nameRegex.match(surname).hasMatch() ||
        !nameRegex.match(name).hasMatch() || !patronym.isEmpty() && !nameRegex.match(patronym).hasMatch()) {
        throw InvalidNameException();
    }

    QRegularExpression phoneRegex("^[\\d \\+\\(\\)\\-]*$");
    if (!phoneRegex.match(phoneNumber).hasMatch()) {
        throw InvalidPhoneNumberException();
    }

    QRegularExpression numberRegex("^[0-9]+$");
    if (!numberRegex.match(age).hasMatch() ||
        !numberRegex.match(blockNumber).hasMatch()){
        throw InvalidNumberException();
    }
}
