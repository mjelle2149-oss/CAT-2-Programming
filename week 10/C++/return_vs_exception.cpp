// ACTIVITY 3: RETURN CODES VS EXCEPTIONS
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>
using namespace std;

// METHOD 1: Return-code strategy.
// Returns true if the file opens successfully, false otherwise.
bool readFileWithReturnCode(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        return false;
    }
    // File opened successfully; this example only demonstrates the strategy.
    return true;
}

// METHOD 2: Exception strategy.
void readFileWithException(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        throw runtime_error("File not found: " + filename);
    }
    // File opened successfully; this example only demonstrates the strategy.
}

int main() {
    cout << "--- Testing Return Code Strategy ---" << endl;
    if (!readFileWithReturnCode("data.txt")) {
        cout << "Return Code: Handled error gracefully. Program continues." << endl;
    }

    cout << "\n--- Testing Exception Strategy ---" << endl;
    try {
        readFileWithException("data.txt");
    } catch (const runtime_error& e) {
        cout << "Exception Caught: " << e.what() << endl;
        cout << "Exception Strategy: Forced us to handle the error!" << endl;
    }
    return 0;
}
