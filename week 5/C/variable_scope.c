// ACTIVITY 2: VARIABLE SCOPE - GLOBAL VS. LOCAL
#include <stdio.h>

// Global variable: accessible to all functions in this file.
int globalCounter = 100;

void displayGlobal(void) {
    printf("Inside displayGlobal: globalCounter = %d\n", globalCounter);
}

void modifyGlobal(void) {
    globalCounter = 500;
    printf("Inside modifyGlobal: globalCounter changed to %d\n", globalCounter);
}

void localDemo(void) {
    int globalCounter = 999; // Local variable shadows the global variable.
    printf("Inside localDemo: globalCounter = %d\n", globalCounter);
}

int main(void) {
    int localCounter = 50; // Local to main.

    printf("In main: globalCounter = %d\n", globalCounter);
    printf("In main: localCounter = %d\n", localCounter);

    displayGlobal();
    modifyGlobal();
    localDemo();

    printf("Back in main: globalCounter = %d\n", globalCounter);
    return 0;
}
