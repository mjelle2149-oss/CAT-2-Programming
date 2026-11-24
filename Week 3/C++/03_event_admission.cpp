#include <iostream>
using namespace std;
int main() {
    int age, hasTicket;
    cout << "Enter age: "; if (!(cin >> age) || age < 0) return 1;
    cout << "Has ticket? (1 yes, 0 no): "; if (!(cin >> hasTicket)) return 1;
    if (age >= 18) {
        cout << "Adult verified.\n";
        if (hasTicket) cout << "Welcome to the event!\n";
        else cout << "Please purchase a ticket at the door.\n";
    } else {
        cout << "Minor detected.\n";
        if (age >= 12) cout << "Teenager - needs guardian signature.\n";
        else cout << "Child - must be accompanied by adult.\n";
    }
    return 0;
}
