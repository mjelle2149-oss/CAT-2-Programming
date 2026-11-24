/* WEEK 9 - ACTIVITY 3: SIMULATING ABSTRACT CLASSES */
#include <stdio.h>

struct Shape {
    double (*calculateArea)(void *derivedShape);
};

struct Square {
    struct Shape base;
    double side;
};

struct Circle {
    struct Shape base;
    double radius;
};

double squareArea(void *shapePtr) {
    struct Square *square = (struct Square *)shapePtr;
    return square->side * square->side;
}

double circleArea(void *shapePtr) {
    struct Circle *circle = (struct Circle *)shapePtr;
    return 3.14159 * circle->radius * circle->radius;
}

int main(void) {
    struct Square square;
    square.side = 5.0;
    square.base.calculateArea = squareArea;

    struct Circle circle;
    circle.radius = 3.0;
    circle.base.calculateArea = circleArea;

    if (square.base.calculateArea == NULL || circle.base.calculateArea == NULL) {
        fprintf(stderr, "Error: an area function has not been assigned.\\n");
        return 1;
    }

    printf("Area of Square: %.2f\n", square.base.calculateArea(&square));
    printf("Area of Circle: %.2f\n", circle.base.calculateArea(&circle));
    return 0;
}
