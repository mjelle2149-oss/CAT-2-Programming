// ACTIVITY 1: BASIC FILE I/O - SUMMING NUMBERS
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("numbers.txt");
    if (!inputFile.is_open()) {
        cerr << "Error: Could not open numbers.txt for reading!" << endl;
        return 1;
    }

    int num;
    int sum = 0;
    cout << "Reading numbers from file..." << endl;

    while (inputFile >> num) {
        cout << "Read: " << num << endl;
        sum += num;
    }
    if (!inputFile.eof()) {
        cerr << "Error: Invalid data found in numbers.txt." << endl;
        return 1;
    }
    inputFile.close();

    cout << "Total Sum: " << sum << endl;

    ofstream outputFile("sum.txt");
    if (!outputFile.is_open()) {
        cerr << "Error: Could not create sum.txt for writing!" << endl;
        return 1;
    }

    outputFile << "The total sum is: " << sum << endl;
    outputFile << "Calculated automatically by the C++ program." << endl;
    outputFile.close();

    cout << "Result successfully saved to sum.txt!" << endl;
    return 0;
}
