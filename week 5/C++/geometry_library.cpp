// ACTIVITY 4: GEOMETRY FUNCTION LIBRARY
#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14159;

double areaOfCircle(double radius) {
    if (radius < 0) {
        return -1.0;
    }
    return PI * radius * radius;
}

double areaOfRectangle(double length, double width) {
    if (length < 0 || width < 0) {
        return -1.0;
    }
    return length * width;
}

double areaOfTriangle(double base, double height) {
    if (base < 0 || height < 0) {
        return -1.0;
    }
    return 0.5 * base * height;
}

void displayMenu() {
    cout << "\n===== GEOMETRY CALCULATOR =====" << endl;
    cout << "1. Area of Circle" << endl;
    cout << "2. Area of Rectangle" << endl;
    cout << "3. Area of Triangle" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    double radius, length, width, base, height, area;

    do {
        displayMenu();
        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a menu number." << endl;
            return 1;
        }

        switch (choice) {
            case 1:
                cout << "Enter radius: ";
                if (!(cin >> radius)) return 1;
                area = areaOfCircle(radius);
                if (area < 0) cout << "Error: Radius cannot be negative." << endl;
                else cout << "Area of circle: " << fixed << setprecision(2) << area << endl;
                break;
            case 2:
                cout << "Enter length: ";
                if (!(cin >> length)) return 1;
                cout << "Enter width: ";
                if (!(cin >> width)) return 1;
                area = areaOfRectangle(length, width);
                if (area < 0) cout << "Error: Length and width cannot be negative." << endl;
                else cout << "Area of rectangle: " << fixed << setprecision(2) << area << endl;
                break;
            case 3:
                cout << "Enter base: ";
                if (!(cin >> base)) return 1;
                cout << "Enter height: ";
                if (!(cin >> height)) return 1;
                area = areaOfTriangle(base, height);
                if (area < 0) cout << "Error: Base and height cannot be negative." << endl;
                else cout << "Area of triangle: " << fixed << setprecision(2) << area << endl;
                break;
            case 4:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
