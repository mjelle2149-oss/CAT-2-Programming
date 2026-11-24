// ACTIVITY 3: RECURSION - TWO FACTORIAL SOLUTIONS
#include <iostream>
using namespace std;

// Simple recursion: n * factorial(n - 1).
unsigned long long factorialRecursive(int n) {
    if (n <= 1) {
        return 1;
    }
    return static_cast<unsigned long long>(n) * factorialRecursive(n - 1);
}

// Tail recursion with an accumulator.
unsigned long long factorialTail(int n, unsigned long long accumulator = 1) {
    if (n <= 1) {
        return accumulator;
    }
    return factorialTail(n - 1, static_cast<unsigned long long>(n) * accumulator);
}

int main() {
    int num;

    cout << "Enter a number to calculate factorial (0-20): ";
    if (!(cin >> num)) {
        cout << "Invalid input. Please enter an integer." << endl;
        return 1;
    }
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }
    if (num > 20) {
        cout << "Please enter a number from 0 to 20 to avoid integer overflow." << endl;
        return 1;
    }

    cout << "\nUsing simple recursion:" << endl;
    cout << " " << num << "! = " << factorialRecursive(num) << endl;

    cout << "\nUsing tail recursion:" << endl;
    cout << " " << num << "! = " << factorialTail(num) << endl;

    cout << "\n--- Comparison ---" << endl;
    cout << "Simple recursion: Clear, matches the mathematical definition." << endl;
    cout << "Tail recursion: Uses an accumulator and may benefit from compiler optimisation." << endl;
    return 0;
}
