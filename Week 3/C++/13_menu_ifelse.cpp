#include <iostream>
using namespace std;
int main() {
    int choice;
    cout << "Menu:\n1. Start\n2. Load\n3. Settings\n4. Exit\nChoice: ";
    if(!(cin>>choice)) return 1;
    if(choice==1) cout << "Starting game...\n";
    else if(choice==2) cout << "Loading game...\n";
    else if(choice==3) cout << "Opening settings...\n";
    else if(choice==4) cout << "Exiting...\n";
    else cout << "Invalid choice!\n";
    return 0;
}
