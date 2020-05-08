#ifndef PROGA_LAB5_MATRIX_EXCEPTIONS_H
#define PROGA_LAB5_MATRIX_EXCEPTIONS_H

#pragma once

#include <exception>

class MatrixException : public std::exception {
public:
    const char *what() const noexcept override {
        return "Matrix exception\n";
    }
};

class IndexOutOfBoundsException : public MatrixException {
public:
    const char *what() const noexcept override {
        return "Index is out of bounds\n";
    }
};

#endif //PROGA_LAB5_MATRIX_EXCEPTIONS_H
