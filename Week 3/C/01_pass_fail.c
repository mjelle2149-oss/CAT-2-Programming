#include <stdio.h>
int main(void) {
    int score;
    printf("Enter score: ");
    if (scanf("%d", &score) != 1 || score < 0 || score > 100) {
        printf("Invalid score. Enter a value from 0 to 100.\n");
        return 1;
    }
    if (score >= 60) printf("You passed!\n");
    else printf("You failed. Try again!\n");
    return 0;
}
