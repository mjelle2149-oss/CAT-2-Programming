#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double score; char grade, modifier=' ';
    cout << "===== GRADE CALCULATOR =====\nEnter percentage score (0-100): ";
    if(!(cin>>score) || score<0 || score>100) {
        cout << "Invalid score! Must be between 0 and 100.\n"; return 1;
    }
    if(score>=90) grade='A'; else if(score>=80) grade='B';
    else if(score>=70) grade='C'; else if(score>=60) grade='D'; else grade='F';
    if(grade!='F') {
        int lastDigit=static_cast<int>(score)%10;
        if(grade=='A') { if(score>=97) modifier='+'; else if(score<93) modifier='-'; }
        else { if(lastDigit>=7) modifier='+'; else if(lastDigit<=3) modifier='-'; }
    }
    cout << fixed << setprecision(1) << "Score: " << score << "%\nGrade: " << grade;
    if(modifier!=' ') cout << modifier;
    cout << '\n';
    switch(grade) {
        case 'A': cout << "Excellent work!\n"; break;
        case 'B': cout << "Good job!\n"; break;
        case 'C': cout << "Satisfactory.\n"; break;
        case 'D': cout << "Needs improvement.\n"; break;
        case 'F': cout << "Please seek help.\n"; break;
    }
    return 0;
}
