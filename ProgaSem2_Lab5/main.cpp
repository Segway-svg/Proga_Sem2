#include <iostream>
#include "swap.h"
#include <vector>
#include "functions.h"
#include "exceptions.h"
#include "template.h"

/*
 * Variant 23
 * Tasks C, H
 */


int main(int argc, const char *argv[]) {
    // Task C
    int testInt1 = 1, testInt2 = 2;
    double testDouble1 = 1.0, testDouble2 = 2.0;

    Swap(testInt1, testInt2);
    std::cout << testInt1 << " " << testInt2 << std::endl;
    Swap(testDouble1, testDouble2);
    std::cout << testDouble1 << " " << testDouble2 << std::endl;

    // Task G
    int width;
    int height;
    int dataType;
    int command;

    std::cout << "Enter the weight of matrix: ";
    std::cin >> width;
    std::cout << "Enter the height of matrix: ";
    std::cin >> height;
    std::cout << std::endl;

    std::cout << "Which elements do you want to use?" << std::endl;
    printDataTypesForMatrix();
    std::cout << "Your data type: ";
    std::cin >> dataType;
    std::cout << std::endl;

    try {
        switch (dataType) {
            case integers: {
                Matrix<int> matrixWithIntegers(width, height);
                matrixWithIntegers.input();

                while (true) {
                    printCommands();
                    std::cout << "Enter the command: ";
                    std::cin >> command;

                    switch (command) {
                        case stop: {
                            return 0;
                        }

                        case printTheCertainElement: {
                            matrixWithIntegers.printTheCertainElement();
                            break;
                        }

                        case print: {
                            std::cout << "Matrix:" << std::endl;
                            matrixWithIntegers.print();
                            break;
                        }

                        case newMatrx: {
                            matrixWithIntegers.input();
                            break;
                        }
                    }
                }
                break;
            }
            case doubles: {
                Matrix<double> matrixWithDoubles(width, height);
                matrixWithDoubles.input();

                while (true) {
                    printCommands();
                    std::cout << "Enter the command: ";
                    std::cin >> command;

                    switch (command) {
                        case stop: {
                            return 0;
                        }

                        case printTheCertainElement: {
                            matrixWithDoubles.printTheCertainElement();
                            break;
                        }

                        case print: {
                            matrixWithDoubles.print();
                            break;
                        }

                        case newMatrx: {
                            matrixWithDoubles.input();
                            std::cout << std::endl;
                            break;
                        }
                    }
                }
                break;
            }
        }
    } catch (Exception &exception) {
        std::cerr << exception.what() << std::endl;
        return 1;
    }
    return 0;
}
