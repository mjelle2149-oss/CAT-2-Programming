// ACTIVITY 1: PASS-BY-VALUE - THE SWAP THAT DOESN'T SWAP
#include <iostream>
using namespace std;

// The parameters receive copies, so the original variables are unchanged.
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << " Inside function - After swap: a = " << a << ", b = " << b << endl;
}

// C++ pass-by-reference uses & to modify the original variables.
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    cout << "Before calling swapByValue:" << endl;
    cout << " x = " << x << ", y = " << y << endl;
    swapByValue(x, y);
    cout << "After calling swapByValue:" << endl;
    cout << " x = " << x << ", y = " << y << endl;
    cout << "\nExplanation: The function received COPIES of x and y." << endl;
    cout << "Changes made inside the function do not affect the originals." << endl;

    cout << "\nFixing the swap using pass-by-reference:" << endl;
    swapByReference(x, y);
    cout << "After calling swapByReference: x = " << x << ", y = " << y << endl;
    return 0;
}
