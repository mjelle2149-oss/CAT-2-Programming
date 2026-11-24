#include <iostream>
using namespace std;
int main() {
    int choice;
    cout << "===== MAIN MENU =====\n1. Start Game\n2. Load Game\n3. Settings\n4. Credits\n5. Exit\nEnter your choice: ";
    if (!(cin >> choice)) return 1;
    switch(choice) {
        case 1: cout << "Starting new game...\n"; [[fallthrough]];
        case 2: cout << "Loading game assets...\nGame ready!\n"; break;
        case 3: cout << "Opening settings...\n"; break;
        case 4: cout << "Game developed by CS Students\n"; break;
        case 5: cout << "Goodbye!\n"; break;
        default: cout << "Invalid choice. Please try again.\n";
    }
    return 0;
}
