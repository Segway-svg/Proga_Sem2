//
// Created by tukat on 07.03.2020.
//

#include <cstdlib>
#include "Header.h"

//Number 1
Complex::Complex() = default;

Complex::Complex(double r) {
    re = r;
    im = 0;
}

Complex::Complex(double r, double i) {
    re = r;
    im = i;
}

Complex Complex::operator*(const double num) {
    return Complex(re * num, im);
}

Complex Complex::operator+(const Complex &c) {
    return Complex(re + c.re, im + c.im);
}

Complex Complex::operator*(const Complex &c) {
    return Complex(re * c.re, im * c.im);
}

Complex::operator double() const {
    return sqrt(re * re + im * im);
}






