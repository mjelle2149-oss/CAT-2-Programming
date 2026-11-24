#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char grade;
    cout << "Enter your grade (A, B, C, D, F): ";
    if (!(cin >> grade)) return 1;
    switch(toupper(static_cast<unsigned char>(grade))) {
        case 'A': cout << "Excellent! 90-100%\n"; break;
        case 'B': cout << "Good! 80-89%\n"; break;
        case 'C': cout << "Satisfactory! 70-79%\n"; break;
        case 'D': cout << "Passing! 60-69%\n"; break;
        case 'F': cout << "Failing. Please retake.\n"; break;
        default: cout << "Invalid grade entered!\n";
    }
    return 0;
}
