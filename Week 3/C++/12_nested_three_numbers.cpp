#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout << "Enter three different numbers: ";
    if(!(cin>>a>>b>>c)) return 1;
    if(a>b) {
        if(b>c) cout << "Path 1: a > b > c\n";
        else if(a>c) cout << "Path 2: a > c > b\n";
        else cout << "Path 3: c > a > b\n";
    } else {
        if(a>c) cout << "Path 4: b > a > c\n";
        else if(b>c) cout << "Path 5: b > c > a\n";
        else cout << "Path 6: c > b > a\n";
    }
    return 0;
}
