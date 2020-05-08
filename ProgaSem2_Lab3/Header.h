//
// Created by tukat on 07.03.2020.
//

#ifndef PROGASEM2_LAB3_HEADER_H
#define PROGASEM2_LAB3_HEADER_H
using namespace std;

// Number 1
class Complex {
public:

    Complex();

    explicit Complex(double r);

    Complex(double r, double i);

    ~Complex() = default;

    Complex operator*(double num);

    Complex operator+(const Complex &c);

    Complex operator*(const Complex &c);

    explicit operator double() const; // Не меняет внутри ничего своего класса

private:
    double re{}, im{};
};


#endif //PROGASEM2_LAB3_HEADER_H








