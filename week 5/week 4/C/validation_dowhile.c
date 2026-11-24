/* ACTIVITY 3B: Input validation using a do-while loop */
#include <stdio.h>

int main(void) {
    int number;

    do {
        printf("Enter a positive number: ");
        if (scanf("%d", &number) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            return 1;
        }

        if (number <= 0) {
            printf("Invalid! ");
        }
    } while (number <= 0);

    printf("You entered: %d\n", number);
    return 0;
}
