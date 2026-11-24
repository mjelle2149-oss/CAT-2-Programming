// ACTIVITY 3B: Input validation using a do-while loop
#include <iostream>
using namespace std;

int main() {
    int number;

    do {
        cout << "Enter a positive number: ";
        if (!(cin >> number)) {
            cout << "Invalid input. Please enter an integer." << endl;
            return 1;
        }

        if (number <= 0) {
            cout << "Invalid! ";
        }
    } while (number <= 0);

    cout << "You entered: " << number << endl;
    return 0;
}
