// ACTIVITY 2: VARIABLE SCOPE - GLOBAL VS. LOCAL
#include <iostream>
using namespace std;

// Global variable: accessible to all functions in this file.
int globalCounter = 100;

void displayGlobal() {
    cout << "Inside displayGlobal: globalCounter = " << globalCounter << endl;
}

void modifyGlobal() {
    globalCounter = 500;
    cout << "Inside modifyGlobal: globalCounter changed to " << globalCounter << endl;
}

void localDemo() {
    int globalCounter = 999; // Local variable shadows the global variable.
    cout << "Inside localDemo: globalCounter = " << globalCounter << endl;
}

int main() {
    int localCounter = 50; // Local to main.

    cout << "In main: globalCounter = " << globalCounter << endl;
    cout << "In main: localCounter = " << localCounter << endl;

    displayGlobal();
    modifyGlobal();
    localDemo();

    cout << "Back in main: globalCounter = " << globalCounter << endl;
    return 0;
}
