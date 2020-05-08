#include <iostream>
#include <string>
#include "Header.h"
#include "Header2.h"
//DONE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

int main() {
    Complex Complex1(4.0, 5.1);
    Complex1.operator*(2.4);
    Complex Complex2(5.0, 6.8);
    Complex1 = Complex1.operator+(Complex2);
    Complex1 = Complex1.operator+(Complex2);
    Complex1.operator double();

    IntArray array1(5);
    array1[0] = 1;
    array1[1] = 2;
    array1[2] = 3;
    array1[3] = 4;
    array1[4] = 5;
    IntArray array2(5);
    array2[0] = 6;
    array2[1] = 7;
    array2[2] = 8;
    array2[3] = 9;

    std::cout << "Array 1 is " << (std::string) array1 << ", array 2 is " << (std::string) array2 << std::endl;

    IntArray result = array1 + array2;

    std::cout << "Array 1 + array 2 is " << (std::string) result << std::endl;

    std::cout << "Array 1 == array 2? ";
    if (array1 == array2)
        std::cout << "True" << std::endl;
    else
        std::cout << "False" << std::endl;

    std::cout << "Array 1 < array2? ";
    if (array1 < array2)
        std::cout << "True" << std::endl;
    else
        std::cout << "False" << std::endl;

    std::cout << "Array 1 < array2? ";
    if (array1 < array2)
        std::cout << "True" << std::endl;
    else
        std::cout << "False" << std::endl;

    std::cout << "Array1 != array2? ";
    if (array1 != array2)
        std::cout << "True" << std::endl;
    else
        std::cout << "False" << std::endl;
}

