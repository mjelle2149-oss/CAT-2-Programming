// student name , course, 3 test scores
// total average and %


#include<iostream>
#include<string>
#include<iomanip> // gives you set preciasion for formatting decimals
 using namespace std;
 int main(){ 

    string stuName;
    string course;  
    string Grade ;

    int score1,score2, score3,score4;
    int totalscore ;

    double average;
    double percentage;

//A costant declaration  cannot be changed during program execution
const int MAX_SCORE = 100; // THE MAX POSSIBLE SCORE TEST

cout << "========================================" << endl;
cout << " STUDENT SCORE CALCULATOR" << endl;
cout << "========================================" << endl;
cout << endl;

// ============================================================
// QUESTION 1: STUDENT NAME
// ============================================================

cout << "Enter student name: ";
getline(cin, stuName); // Reads the full line (including spaces)

// ============================================================
// QUESTION 2: COURSE
// ============================================================

cout << "Enter course (BBIT/BCS): ";
getline(cin, course);

// QUESTION 3: TEST SCORES
// cin >> reads numbers and stores them in int variables.
// ============================================================

cout << "Enter score for Test 1: ";
cin >> score1;

cout << "Enter score for Test 2: ";
cin >> score2;

cout << "Enter score for Test 3: ";
cin >> score3;
cout << "Enter score for Test 4: ";
cin >> score4;

if (score1 < 0 || score1 > 100 ||
    score2 < 0 || score2 > 100 ||
    score3 < 0 || score3 > 100 ||
    score4 < 0 || score4 > 100) {

    cout << "Error: Scores must be between 0 and 100." << endl;
    return 0;
}


// ============================================================
// CALCULATION 1: TOTAL SCORE
// The + operator adds the three scores.
// The = operator assigns the result to totalscore.
// ============================================================

totalscore = score1 + score2 + score3+score4;


// ============================================================
// CALCULATION 2: AVERAGE
// The / operator divides totalscore by 3.
// We use 3.0 (double) to get decimal division.
// If we used 3 (int), the result would be truncated.
// ============================================================

average = totalscore / 4.0;

// ============================================================
// CALCULATION 3: PERCENTAGE
// Formula: (totalscore / maximumPossible) * 100

// maximumPossible = 4tests × 100 marks = 400
// ============================================================

percentage = (totalscore / 400.0) * 100;

cout << "DEBUG - Total: " << totalscore << endl;
 
// ============================================================
// DISPLAY REPORT CARD
// fixed << setprecision(2) formats decimals to 2 places.
// ============================================================

cout << endl;
cout << "========================================" << endl;
cout << " REPORT CARD" << endl;
cout << "========================================" << endl;
cout << endl;

cout << "Student: " << stuName << endl;

cout << "Course: " << course << endl;
cout << endl;

cout << "Test 1: " << score1 << "/" << MAX_SCORE << endl;
cout << "Test 2: " << score2 << "/" << MAX_SCORE << endl;
cout << "Test 3: " << score3 << "/" << MAX_SCORE << endl;
cout << "Test 4: " << score4<< "/" << MAX_SCORE << endl;

cout << endl;


cout << "Total: " << totalscore << "/400" << endl;
cout << "Average: " << fixed << setprecision(2) << average << endl;
cout << "Percentage: " << fixed << setprecision(2) << percentage << "%" << endl;
cout << endl;

// Determine pass or fail
if (percentage >= 50) {
cout << "Result: PASS" << endl;
} else {
cout << "Result: FAIL" << endl;
}



if (percentage >= 90) {
    cout << 'A' << endl;
}
else if (percentage >= 80) {
    cout << 'B' << endl;
} 
else if (percentage >= 70) {
    cout << 'C' << endl;
}
else if(percentage >= 60) {
    cout<< 'D' << endl;
}
else   {
    cout << 'F' << endl;
 }


cout << "========================================" << endl;



return 0;

}