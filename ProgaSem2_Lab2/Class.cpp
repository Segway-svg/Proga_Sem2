#include "Class.h"


void Queue::lengthOfQueue() {
    if (counter1 == 0)
        cout << "Queue is empty." << endl;
    else
        cout << "Length of queue is: " << counter1 << endl;
}

void Queue::pushString() {
    cout << "Enter a string: " << endl;
    cin >> myQueue[counter1];
    counter1++;
}

void Queue::popString() {
    counter2++;
}

void Queue::topString() {
    if (counter1 == counter2)
        cout << "There is no top. Queue is empty." << myQueue[counter2] << endl;
    else
        cout << "Top string is: " << myQueue[counter1 - 1] << endl;
}

void Queue::downString() {
    if (counter1 == counter2)
        cout << "There is no down. Queue is empty." << myQueue[counter2] << endl;
    else
        cout << "Down string is: " << myQueue[counter2] << endl;
}

void Queue::printString() const {
    cout << "Whole queue: ";
    if (counter1 == counter2)
        cout << "Queue is empty." << endl;
    for (int i = counter2; i < counter1; i++)
        cout << myQueue[i] << " ";
    cout << endl;
}


void Queue::YourChoice() {
    cout << "Choose on of the command: 1) lengthOfQueue; 2) pushString; 3) popString; 4) topString; 5) downString;"
            " 6) printString" << endl;
    cin >> number;
    switch (number) {
        case 1:
            lengthOfQueue();
            break;
        case 2:
            pushString();
            break;
        case 3:
            popString();
            break;
        case 4:
            topString();
            break;
        case 5:
            downString();
            break;
        case 6:
            printString();
            break;
        default:
            cerr << "Wrong number" << endl;
            exit(EXIT_FAILURE);
    }
}



