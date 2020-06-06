#ifndef PROGA_LAB5_FUNCTIONS_H
#define PROGA_LAB5_FUNCTIONS_H
#include <iostream>


void printDataTypesForMatrix() {
    std::cout << "0. Целыми числами" << std::endl;
    std::cout << "1. Вещественными числами" << std::endl;
}

enum DataTypes {
    integers,
    doubles,
};

void printCommands() {
    std::cout << "1. Write the current element" << std::endl;
    std::cout << "2. Write the matrix" << std::endl;
    std::cout << "3. Enter new elements of matrix" << std::endl;
    std::cout << "0. End the program" << std::endl;
}

enum Commands {
    stop,
    printTheCertainElement,
    print,
    newMatrx,
};
#endif //PROGA_LAB5_FUNCTIONS_H
