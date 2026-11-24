// ABOUT ME - C VERSION
// This program asks six questions and displays a personalized summary.

#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main(void) {
    char name[MAX_LEN];
    char course[MAX_LEN];
    char hobby[MAX_LEN];
    char reason[MAX_LEN];
    char expectation[MAX_LEN];
    char definition[MAX_LEN];

    printf("========================================\n");
    printf("   WELCOME TO YOUR FIRST C PROGRAM!\n");
    printf("========================================\n\n");

    printf("1. What is your name? ");
    if (fgets(name, MAX_LEN, stdin) == NULL) return 1;
    name[strcspn(name, "\n")] = '\0';

    printf("2. What course are you doing? (BBIT/BCS): ");
    if (fgets(course, MAX_LEN, stdin) == NULL) return 1;
    course[strcspn(course, "\n")] = '\0';

    printf("3. What is your hobby? ");
    if (fgets(hobby, MAX_LEN, stdin) == NULL) return 1;
    hobby[strcspn(hobby, "\n")] = '\0';

    printf("4. Why did you choose this course? ");
    if (fgets(reason, MAX_LEN, stdin) == NULL) return 1;
    reason[strcspn(reason, "\n")] = '\0';

    printf("5. What do you expect to learn in programming? ");
    if (fgets(expectation, MAX_LEN, stdin) == NULL) return 1;
    expectation[strcspn(expectation, "\n")] = '\0';

    printf("6. In your own words, what is programming? ");
    if (fgets(definition, MAX_LEN, stdin) == NULL) return 1;
    definition[strcspn(definition, "\n")] = '\0';

    printf("\n========================================\n");
    printf("   YOUR PROFILE SUMMARY\n");
    printf("========================================\n\n");

    printf("Name:           %s\n", name);
    printf("Course:         %s\n", course);
    printf("Hobby:          %s\n", hobby);
    printf("Reason:         %s\n", reason);
    printf("Expectation:    %s\n", expectation);
    printf("Programming is: %s\n", definition);

    printf("\n========================================\n");
    printf("   Thank you for completing this!\n");
    printf("========================================\n");

    return 0;
}
