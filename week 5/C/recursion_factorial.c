// ACTIVITY 3: RECURSION - TWO FACTORIAL SOLUTIONS
#include <stdio.h>

// Simple recursion: n * factorial(n - 1).
unsigned long long factorialRecursive(int n) {
    if (n <= 1) {
        return 1;
    }
    return (unsigned long long)n * factorialRecursive(n - 1);
}

// Tail-recursive helper; C has no default function arguments.
unsigned long long factorialTailHelper(int n, unsigned long long accumulator) {
    if (n <= 1) {
        return accumulator;
    }
    return factorialTailHelper(n - 1, (unsigned long long)n * accumulator);
}

// Wrapper function starts the accumulator at 1.
unsigned long long factorialTail(int n) {
    return factorialTailHelper(n, 1);
}

int main(void) {
    int num;

    printf("Enter a number to calculate factorial (0-20): ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    if (num > 20) {
        printf("Please enter a number from 0 to 20 to avoid integer overflow.\n");
        return 1;
    }

    printf("\nUsing simple recursion:\n");
    printf(" %d! = %llu\n", num, factorialRecursive(num));

    printf("\nUsing tail recursion:\n");
    printf(" %d! = %llu\n", num, factorialTail(num));

    printf("\n--- Comparison ---\n");
    printf("Simple recursion: Clear, matches the mathematical definition.\n");
    printf("Tail recursion: Uses an accumulator and may benefit from compiler optimisation.\n");
    return 0;
}
