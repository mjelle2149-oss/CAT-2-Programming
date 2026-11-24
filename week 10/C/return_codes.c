#include <stdio.h>
#include <errno.h>
#include <string.h>

// Function that returns a status code
// 0 means success, 1 means failure.

int readFileWithReturnCode(const char *filename) {

    FILE *file = fopen(filename, "r");

    if (file == NULL) {

        // Display the error message using stderr.
        fprintf(stderr, "Error opening file: %s\n", strerror(errno));

        // Return 1 to indicate failure.
        return 1;
    }

    // File opened successfully.

    fclose(file);

    return 0;
}

int main() {

    printf("--- Testing Return Code Strategy ---\n");

    // Check whether the function returns an error.
    if (readFileWithReturnCode("data.txt") == 1) {

        printf("Main function: Handled error gracefully. Program continues.\n");
    }

    printf("\n--- Evaluation ---\n");

    printf("In C, we must manually check return codes.\n");

    printf("If the programmer forgets to check, the program might crash later.\n");

    return 0;
}