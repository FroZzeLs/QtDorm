#include "./../headers/inputexception.h"

InputException::InputException(const std::string& message) : std::runtime_error(message) {}
