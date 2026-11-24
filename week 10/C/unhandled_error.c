#include <stdio.h>

int main() {

    // Trying to open a file that DOES NOT EXIST.
    FILE *myFile = fopen("missing_file.txt", "r");

    // We are skipping the NULL check.

    char data[100];

    printf("Attempting to read from missing file...\n");

    // Trying to read from a file that failed to open.
    fscanf(myFile, "%s", data);

    printf("Data read: %s\n", data);

    fclose(myFile);

    return 0;
}