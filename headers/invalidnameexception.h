#ifndef INVALIDNAMEEXCEPTION_H
#define INVALIDNAMEEXCEPTION_H
#include "inputexception.h"

class InvalidNameException : public InputException {
public:
    InvalidNameException();
};

#endif // INVALIDNAMEEXCEPTION_H
