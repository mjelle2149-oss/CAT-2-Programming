#include <iostream>
using namespace std;
int main() {
    int score; char grade;
    cout << "Enter score (0-100): ";
    if (!(cin >> score) || score < 0 || score > 100) { cout << "Invalid score.\n"; return 1; }
    if (score >= 90) grade='A';
    else if (score >= 80) grade='B';
    else if (score >= 70) grade='C';
    else if (score >= 60) grade='D';
    else grade='F';
    cout << "Grade: " << grade << '\n';
    return 0;
}
