#include <stdio.h>
int main(void) {
    int age, consent, weekend;
    printf("Enter age: "); if (scanf("%d",&age)!=1 || age<0) return 1;
    printf("Has parental consent? (1/0): "); if (scanf("%d",&consent)!=1) return 1;
    printf("Is it weekend? (1/0): "); if (scanf("%d",&weekend)!=1) return 1;
    int canWatch = (age >= 18) || (age >= 13 && consent) || (weekend && age >= 10);
    printf("%s\n", canWatch ? "You can watch the movie!" : "Sorry, you cannot watch this movie.");
    int discount = (age >= 65) || (age <= 12) || (weekend && age <= 18);
    if (discount) printf("You qualify for a discount!\n");
    return 0;
}
