#ifndef PROGASEM2_LAB2_CLASS_H
#define PROGASEM2_LAB2_CLASS_H

#include <iostream>

using namespace std;

class Queue {
public:

    Queue() : counter1(0), counter2(0) {}

    Queue(const Queue &copy) :
            counter1(copy.counter1), counter2(copy.counter2), maxLength(copy.maxLength) {
        for (int i = 0; i < 255; i++)
            myQueue[i] = copy.myQueue[i];
    }

    Queue(int length) : maxLength(length) {}
    void YourChoice();

    void lengthOfQueue();

    void pushString();

    void popString();

    void topString();

    void downString();

    void printString() const;

private:
    string myQueue[255];
    int counter1{};
    int counter2{};
    int number{};
    int maxLength{};
};


#endif //PROGASEM2_LAB2_CLAS{}{}S_H
