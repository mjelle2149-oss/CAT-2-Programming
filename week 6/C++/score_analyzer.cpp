// ============================================================
// ACTIVITY 4: STUDENT SCORE ANALYZER
// Learning Outcome: Read 10 scores, calculate average,
// and display scores above average.
// ============================================================

#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

double calculateAverage(int scores[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    return static_cast<double>(sum) / size;
}

void displayAboveAverage(int scores[], int size, double average) {
    cout << "\nScores above average (" << fixed << setprecision(2)
         << average << "):" << endl;

    bool found = false;
    for (int i = 0; i < size; i++) {
        if (scores[i] > average) {
            cout << " Score " << scores[i] << " at position " << i + 1 << endl;
            found = true;
        }
    }
    if (!found) {
        cout << " None" << endl;
    }
}

int main() {
    const int SIZE = 10;
    int scores[SIZE];

    cout << "Enter " << SIZE << " student scores:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Score " << i + 1 << ": ";
        while (!(cin >> scores[i])) {
            cout << "Invalid input. Enter an integer for score "
                 << i + 1 << ": ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    double average = calculateAverage(scores, SIZE);

    cout << "\n--- Results ---" << endl;
    cout << "Average score: " << fixed << setprecision(2) << average << endl;
    displayAboveAverage(scores, SIZE, average);

    return 0;
}
