// ACTIVITY 1: Sum of the first N natural numbers
#include <iostream>
using namespace std;

int main() {
    long long n, sum = 0;

    cout << "Enter a positive number (N): ";
    if (!(cin >> n) || n <= 0 || n > 1000000000LL) {
        cout << "Invalid input. Enter an integer from 1 to 1000000000.\n";
        return 1;
    }

    for (long long i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "The sum of numbers from 1 to " << n << " is: " << sum << endl;
    return 0;
}
