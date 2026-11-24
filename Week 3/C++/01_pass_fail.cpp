#include <iostream>
using namespace std;
int main() {
    int score;
    cout << "Enter score: ";
    if (!(cin >> score) || score < 0 || score > 100) {
        cout << "Invalid score. Enter a value from 0 to 100.\n";
        return 1;
    }
    if (score >= 60) cout << "You passed!\n";
    else cout << "You failed. Try again!\n";
    return 0;
}
