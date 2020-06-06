#ifndef PROGA_LAB5_EXCEPTIONS_H
#define PROGA_LAB5_EXCEPTIONS_H

#include <iostream>

class Exception : std::exception {
    std::string error;

public:
    Exception(std::string);

    const char *what() const noexcept override;
};

#endif //PROGA_LAB5_EXCEPTIONS_H
