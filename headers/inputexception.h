#ifndef INPUTEXCEPTION_H
#define INPUTEXCEPTION_H
#include <stdexcept>
#include <QString>

class InputException : public std::runtime_error {
public:
    explicit InputException(const std::string& message);
};

#endif // INPUTEXCEPTION_H
