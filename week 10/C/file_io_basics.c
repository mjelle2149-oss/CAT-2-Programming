#include <stdio.h>
#include <stdlib.h>

int main() {

    // 1. Declare file pointers
    FILE *inputFile;
    FILE *outputFile;

    // 2. Open numbers.txt for reading
    inputFile = fopen("numbers.txt", "r");

    if (inputFile == NULL) {
        printf("Error: Could not open numbers.txt!\n");
        return 1;
    }

    int num;
    int sum = 0;

    printf("Reading numbers from file...\n");

    // 3. Read numbers and calculate the sum
    while (fscanf(inputFile, "%d", &num) == 1) {

        printf("Read: %d\n", num);

        sum += num;
    }

    // 4. Close input file
    fclose(inputFile);

    printf("Total Sum: %d\n", sum);

    // 5. Open sum.txt for writing
    outputFile = fopen("sum.txt", "w");

    if (outputFile == NULL) {
        printf("Error: Could not create sum.txt!\n");
        return 1;
    }

    // 6. Write results into sum.txt
    fprintf(outputFile, "The total sum is: %d\n", sum);

    fprintf(outputFile, "Calculated automatically by the C program.\n");

    // 7. Close output file
    fclose(outputFile);

    printf("Result successfully saved to sum.txt!\n");

    return 0;
}