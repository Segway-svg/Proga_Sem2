#include <iostream>
#include "Class.h"


int main() {
    int numOfCommands;
    cout << "How many command do you want to work with?" << endl;
    cin >> numOfCommands;
    Queue CheckYourChoice;
    for (int i = 0; i < numOfCommands; i++)
        CheckYourChoice.YourChoice();
    return 0;
}