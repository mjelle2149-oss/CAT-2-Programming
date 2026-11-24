#include <iostream>
using namespace std;
int main() {
    int age; bool hasTicket, isMember, isBanned;
    cout << "Enter age: "; if(!(cin>>age) || age<0) return 1;
    cout << "Do you have a ticket? (1 yes, 0 no): "; if(!(cin>>hasTicket)) return 1;
    cout << "Are you a member? (1 yes, 0 no): "; if(!(cin>>isMember)) return 1;
    cout << "Are you banned? (1 yes, 0 no): "; if(!(cin>>isBanned)) return 1;
    bool canEnter = (age>=18 && hasTicket && !isBanned) || (isMember && !isBanned);
    cout << (canEnter ? "You can enter the event!\n" : "Sorry, you cannot enter.\n");
    return 0;
}
