#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    int count, totals[5]={0};
    cout << "How many students? ";
    if(!(cin>>count) || count<=0 || count>1000) { cout << "Invalid number.\n"; return 1; }
    for(int i=0;i<count;i++) {
        string name; char grade; double score;
        cout << "\nStudent " << i+1 << " name: ";
        cin >> ws; if(!getline(cin,name)) return 1;
        cout << "Score (0-100): ";
        if(!(cin>>score) || score<0 || score>100) { cout << "Invalid score.\n"; return 1; }
        if(score>=90) grade='A'; else if(score>=80) grade='B';
        else if(score>=70) grade='C'; else if(score>=60) grade='D'; else grade='F';
        cout << name << ": " << fixed << setprecision(1) << score << "% - Grade " << grade << '\n';
        if(grade=='A') totals[0]++; else if(grade=='B') totals[1]++;
        else if(grade=='C') totals[2]++; else if(grade=='D') totals[3]++; else totals[4]++;
    }
    cout << "\n===== CLASS SUMMARY =====\nA: " << totals[0] << "\nB: " << totals[1]
         << "\nC: " << totals[2] << "\nD: " << totals[3] << "\nF: " << totals[4] << '\n';
    return 0;
}
