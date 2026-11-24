#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    string studentName; double score; char grade;
    cout << "Enter student name: ";
    if (!getline(cin,studentName)) return 1;
    cout << "Enter percentage score (0-100): ";
    if (!(cin >> score) || score<0 || score>100) { cout << "ERROR: Score must be between 0 and 100!\n"; return 1; }
    if (score>=90) grade='A'; else if(score>=80) grade='B';
    else if(score>=70) grade='C'; else if(score>=60) grade='D'; else grade='F';
    cout << "\n===== GRADE REPORT =====\nStudent: " << studentName
         << "\nScore: " << fixed << setprecision(2) << score << "%\nLetter Grade: " << grade << '\n';
    cout << "\n===== RECOMMENDATIONS =====\n";
    switch(grade) {
        case 'A': cout << "Consider becoming a peer tutor\nExplore advanced topics\n"; break;
        case 'B': cout << "Review topics where you lost points\nPractice more problems\n"; break;
        case 'C': cout << "Attend office hours regularly\nForm a study group\n"; break;
        case 'D': case 'F': cout << "Mandatory tutoring sessions\nMeet with academic advisor\n"; break;
        default: cout << "Continue your good work\n";
    }
    return 0;
}
