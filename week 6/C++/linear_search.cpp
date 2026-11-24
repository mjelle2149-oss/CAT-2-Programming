// ============================================================
// ACTIVITY 1: LINEAR SEARCH IN AN INTEGER ARRAY
// Learning Outcome: Apply linear search
// ============================================================

#include <iostream>
using namespace std;

// Search for a target value. Return its index if found, otherwise -1.
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the first matching index.
        }
    }
    return -1;
}

int main() {
    int numbers[8] = {15, 42, 7, 89, 23, 56, 11, 74};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target;

    cout << "Array contents: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Enter a number to search: ";
    if (!(cin >> target)) {
        cerr << "Invalid input. Please enter an integer." << endl;
        return 1;
    }

    int position = linearSearch(numbers, size, target);
    if (position != -1) {
        cout << "Element found at index: " << position << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}
