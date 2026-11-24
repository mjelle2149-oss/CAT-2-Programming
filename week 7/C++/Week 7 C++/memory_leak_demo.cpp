// ACTIVITY 3A: INTENTIONAL MEMORY LEAK DEMONSTRATION
// This program intentionally omits delete to demonstrate the risk.
#include <iostream>
using namespace std;

void createLeak() {
    int* ptr = new int(42);

    cout << "Inside function. The value is: " << *ptr << endl;
    cout << "Memory allocated at address: " << ptr << endl;

    // INTENTIONAL LEAK: ptr goes out of scope without delete.
    // The allocated integer can no longer be reached through this pointer.
}

int main() {
    cout << "Calling function that leaks memory..." << endl;
    createLeak();
    cout << "Function finished. The memory is now leaked." << endl;
    return 0;
}
