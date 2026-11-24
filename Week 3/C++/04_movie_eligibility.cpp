#include <iostream>
using namespace std;
int main() {
    int age, consent, weekend;
    cout << "Enter age: "; if (!(cin >> age) || age < 0) return 1;
    cout << "Has parental consent? (1/0): "; if (!(cin >> consent)) return 1;
    cout << "Is it weekend? (1/0): "; if (!(cin >> weekend)) return 1;
    bool canWatch = (age >= 18) || (age >= 13 && consent) || (weekend && age >= 10);
    cout << (canWatch ? "You can watch the movie!\n" : "Sorry, you cannot watch this movie.\n");
    bool discount = (age >= 65) || (age <= 12) || (weekend && age <= 18);
    if (discount) cout << "You qualify for a discount!\n";
    return 0;
}
