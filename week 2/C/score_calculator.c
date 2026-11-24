#include <stdio.h>
#include <string.h>

#define MAX_LEN 100
#define MAX_SCORE 100

int main() {

    char studentName[MAX_LEN];
    char course[MAX_LEN];

    int score1, score2, score3, score4;
    int totalScore;

    double average;
    double percentage;

    printf("========================================\n");
    printf("       STUDENT SCORE CALCULATOR\n");
    printf("========================================\n\n");

    printf("Enter students name: ");
    fgets(studentName, MAX_LEN, stdin);
    studentName[strcspn(studentName, "\n")] = '\0';

    printf("Enter course (BBIT/BCS): ");
    fgets(course, MAX_LEN, stdin);
    course[strcspn(course, "\n")] = '\0';

    // INPUT: TEST SCORES

    printf("Enter score for Test 1: ");
    scanf("%d", &score1);

    printf("Enter score for Test 2: ");
    scanf("%d", &score2);

    printf("Enter score for Test 3: ");
    scanf("%d", &score3);

    printf("Enter score for Test 4: ");
    scanf("%d", &score4);

    // CALCULATIONS

    totalScore = score1 + score2 + score3 + score4;
    average = totalScore / 4.0;
    percentage = (totalScore / 400.0) * 100;

    // OUTPUT: REPORT CARD

    printf("\n");
    printf("========================================\n");
    printf("              REPORT CARD\n");
    printf("========================================\n\n");

    printf("Student: %s\n", studentName);
    printf("Course: %s\n", course);
    printf("\n");

    printf("Test 1: %d/%d\n", score1, MAX_SCORE);
    printf("Test 2: %d/%d\n", score2, MAX_SCORE);
    printf("Test 3: %d/%d\n", score3, MAX_SCORE);
    printf("Test 4: %d/%d\n", score4, MAX_SCORE);

    printf("\n");

    printf("Total: %d/400\n", totalScore);
    printf("Average: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

    printf("\n");

    // Determine pass or fail using an if statement.

    if (percentage >= 50) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }

    // Determine the highest score.

    int highest = score1;

    if (score2 > highest) {
        highest = score2;
    }

    if (score3 > highest) {
        highest = score3;
    }

    if (score4 > highest) {
        highest = score4;
    }

    printf("Highest Score: %d/%d\n", highest, MAX_SCORE);

    printf("========================================\n");

    // Return 0 to signal successful completion.

    return 0;
}