/* ACTIVITY 1: Sum of the first N natural numbers */
#include <stdio.h>

int main(void) {
    long long n, sum = 0;

    printf("Enter a positive number (N): ");
    if (scanf("%lld", &n) != 1 || n <= 0 || n > 1000000000LL) {
        printf("Invalid input. Enter an integer from 1 to 1000000000.\n");
        return 1;
    }

    for (long long i = 1; i <= n; i++) {
        sum += i;
    }

    printf("The sum of numbers from 1 to %lld is: %lld\n", n, sum);
    return 0;
}
