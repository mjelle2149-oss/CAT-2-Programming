#include <stdio.h>
int main(void) {
    int choice;
    printf("Menu:\n1. Start\n2. Load\n3. Settings\n4. Exit\nChoice: ");
    if(scanf("%d",&choice)!=1) return 1;
    switch(choice) {
        case 1: printf("Starting game...\n"); break;
        case 2: printf("Loading game...\n"); break;
        case 3: printf("Opening settings...\n"); break;
        case 4: printf("Exiting...\n"); break;
        default: printf("Invalid choice!\n");
    }
    return 0;
}
