/* WEEK 9 - ACTIVITY 4: POLYMORPHIC DRAWING IN C */
#include <stdio.h>

struct Shape {
    void (*draw)(void);
};

struct Circle { struct Shape base; };
struct Rectangle { struct Shape base; };
struct Triangle { struct Shape base; };

void drawCircle(void)    { printf("Drawing a Circle (O)\n"); }
void drawRectangle(void) { printf("Drawing a Rectangle []\n"); }
void drawTriangle(void)  { printf("Drawing a Triangle /\\\n"); }

void renderCanvas(struct Shape *shapePtr) {
    if (shapePtr != NULL && shapePtr->draw != NULL) {
        shapePtr->draw();
    }
}

int main(void) {
    struct Circle c1, c2;
    struct Rectangle r1;
    struct Triangle t1;

    c1.base.draw = drawCircle;
    r1.base.draw = drawRectangle;
    t1.base.draw = drawTriangle;
    c2.base.draw = drawCircle;

    struct Shape *canvas[4] = {
        (struct Shape *)&c1,
        (struct Shape *)&r1,
        (struct Shape *)&t1,
        (struct Shape *)&c2
    };

    printf("--- Rendering Canvas ---\n");
    for (int i = 0; i < 4; i++) {
        renderCanvas(canvas[i]);
    }
    return 0;
}
