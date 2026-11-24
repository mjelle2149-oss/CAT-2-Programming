#include <iostream>
using namespace std;
int main() {
    int height, age, hasAdult, medicalClearance, hasVipPass;
    cout << "Enter height (in inches): "; if(!(cin>>height)) return 1;
    cout << "Enter age: "; if(!(cin>>age)) return 1;
    cout << "Has adult? (1/0): "; if(!(cin>>hasAdult)) return 1;
    cout << "Has medical clearance? (1/0): "; if(!(cin>>medicalClearance)) return 1;
    cout << "Has VIP pass? (1/0): "; if(!(cin>>hasVipPass)) return 1;
    bool canRide = ((height>=48) && (age>=12 || hasAdult) && (age<=65 || medicalClearance)) || hasVipPass;
    cout << (canRide ? "You can ride!\n" : "Sorry, you cannot ride.\n");
    return 0;
}
