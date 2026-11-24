/* WEEK 8 - ACTIVITY 2: STACK VS HEAP STRUCTS IN C */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car {
    char model[20];
};

void initCar(struct Car *c, const char *modelName) {
    snprintf(c->model, sizeof(c->model), "%s", modelName);
    printf("Car created: %s\n", c->model);
}

void destroyCar(const struct Car *c) {
    printf("Car destroyed: %s\n", c->model);
}

int main(void) {
    struct Car stackCar;
    struct Car *heapCar;

    printf("--- Creating Stack Object ---\n");
    initCar(&stackCar, "Toyota");

    printf("\n--- Creating Heap Object ---\n");
    heapCar = malloc(sizeof *heapCar);
    if (heapCar == NULL) {
        fprintf(stderr, "Error: Unable to allocate memory for heapCar.\n");
        return 1;
    }

    initCar(heapCar, "Honda");
    printf("Heap car model: %s\n", heapCar->model);

    printf("\n--- End of main function ---\n");
    destroyCar(heapCar);
    free(heapCar);
    heapCar = NULL;

    /* stackCar is released automatically when main returns. */
    (void)stackCar;
    return 0;
}
