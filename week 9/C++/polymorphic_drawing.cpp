// WEEK 9 - ACTIVITY 4: THE POLYMORPHIC DRAWING PROGRAM
#include <iostream>
#include <vector>
using namespace std;

class Shape {
public:
    virtual void draw() const = 0;
    virtual ~Shape() = default;
};

class Circle : public Shape {
public:
    void draw() const override { cout << "Drawing a Circle (O)" << endl; }
};

class Rectangle : public Shape {
public:
    void draw() const override { cout << "Drawing a Rectangle []" << endl; }
};

class Triangle : public Shape {
public:
    void draw() const override { cout << "Drawing a Triangle /\\\\" << endl; }
};

void renderCanvas(const Shape *shape) {
    if (shape != nullptr) {
        shape->draw();
    }
}

int main() {
    vector<Shape*> canvas;
    canvas.push_back(new Circle());
    canvas.push_back(new Rectangle());
    canvas.push_back(new Triangle());
    canvas.push_back(new Circle());

    cout << "--- Rendering Canvas ---" << endl;
    for (const Shape *shape : canvas) {
        renderCanvas(shape);
    }

    cout << "\n--- Cleaning Up Memory ---" << endl;
    for (Shape *shape : canvas) {
        delete shape;
    }
    canvas.clear();
    return 0;
}
