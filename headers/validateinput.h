#ifndef VALIDATEINPUT_H
#define VALIDATEINPUT_H
#include <QRegularExpression>
#include <QString>

void validateInput(const QString& surname, const QString& name, const QString& patronym,
                   const QString& phoneNumber, const QString& age,
                   const QString& blockNumber, const QString& opt);
void validateInput(const QString& surname, const QString& name, const QString& patronym,
                   const QString& phoneNumber, const QString& age,
                   const QString& blockNumber);

#endif // VALIDATEINPUT_H
