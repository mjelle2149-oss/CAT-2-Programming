// ACTIVITY 1: PASS-BY-VALUE - THE SWAP THAT DOESN'T SWAP
#include <stdio.h>

// The parameters receive copies, so the original variables are unchanged.
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside function - After swap: a = %d, b = %d\n", a, b);
}

// C uses pointers to modify the original variables.
void swapByPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int x = 10, y = 20;

    printf("Before calling swapByValue:\n");
    printf(" x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf("After calling swapByValue:\n");
    printf(" x = %d, y = %d\n", x, y);
    printf("\nExplanation: The function received COPIES of x and y.\n");
    printf("Changes made inside the function do not affect the originals.\n");

    printf("\nFixing the swap using pointers:\n");
    swapByPointer(&x, &y);
    printf("After calling swapByPointer: x = %d, y = %d\n", x, y);
    return 0;
}
