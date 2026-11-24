// ACTIVITY 2: THE DANGER OF IGNORING FILE ERRORS
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // missing_file.txt is intentionally not supplied.
    ifstream myFile("missing_file.txt");

    // Deliberately demonstrating what happens when is_open() is not checked.
    string data;
    cout << "Attempting to read from missing file..." << endl;
    myFile >> data;

    cout << "Data read: " << data << endl;
    cout << "Program continued running without crashing." << endl;
    return 0;
}
