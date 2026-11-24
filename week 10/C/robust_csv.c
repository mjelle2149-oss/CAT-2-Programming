#include <stdio.h>
#include <string.h>

int main() {

    // Open the CSV file for reading.
    FILE *file = fopen("students.csv", "r");

    if (file == NULL) {
        fprintf(stderr, "Error: Could not find students.csv!\n");
        return 1;
    }

    char line[200];
    char name[50];

    int score1, score2, score3;
    int validStudents = 0;
    int invalidStudents = 0;

    printf("Reading student records...\n\n");

    // Read the CSV file one line at a time.
    while (fgets(line, sizeof(line), file) != NULL) {

        // Remove the newline character.
        line[strcspn(line, "\n")] = '\0';

        // Read the student name and three scores.
        if (sscanf(line, "%49[^,],%d,%d,%d",
                   name, &score1, &score2, &score3) == 4) {

            // Check whether scores are within 0-100.
            if (score1 >= 0 && score1 <= 100 &&
                score2 >= 0 && score2 <= 100 &&
                score3 >= 0 && score3 <= 100) {

                double average = (score1 + score2 + score3) / 3.0;

                printf("Student: %s\n", name);
                printf("Average: %.2f\n\n", average);

                validStudents++;

            } else {

                printf("Invalid scores: %s\n\n", name);
                invalidStudents++;
            }

        } else {

            printf("Malformed record skipped: %s\n\n", line);
            invalidStudents++;
        }
    }

    // Close the CSV file.
    fclose(file);

    printf("================================\n");
    printf("CSV PROCESSING SUMMARY\n");
    printf("================================\n");

    printf("Valid students: %d\n", validStudents);
    printf("Invalid records: %d\n", invalidStudents);

    printf("================================\n");

    return 0;
}