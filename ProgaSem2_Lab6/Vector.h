#ifndef PROGA_LAB6_VECTOR_H
#define PROGA_LAB6_VECTOR_H

#include <iostream>
#include <cmath>
#include <vector>

class Vector {
public:
    Vector(double, double, double, double);

    explicit Vector(double);

    [[nodiscard]] double GetCoordVecX() const;

    [[nodiscard]] double GetCoordVecY() const;

    void GetCoordVec() const;

    [[nodiscard]] double GetlenghtVec() const;

    bool operator>(const Vector &);

    bool operator<(const Vector &);

    bool operator>=(const Vector &);

    bool operator<=(const Vector &);

    bool operator==(const Vector &);

    bool operator!=(const Vector &);

private:
    double lenght;
    double X;
    double Y;

    void SetLenght(double, double);

    void SetCoordVec(double, double, double, double);
};


#endif //PROGA_LAB6_VECTOR_H
