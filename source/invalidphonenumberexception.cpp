#include "./../headers/invalidphonenumberexception.h"

InvalidPhoneNumberException::InvalidPhoneNumberException() : InputException("Номер телефона может содержать только цифры, '+', '(', ')', и '-'.") {}
