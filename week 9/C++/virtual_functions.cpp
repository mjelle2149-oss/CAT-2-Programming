// WEEK 9 - ACTIVITY 2: THE VIRTUAL FUNCTION MYSTERY
#include <iostream>
using namespace std;

class AnimalWithoutVirtual {
public:
    void speak() const {
        cout << "Animal makes a generic sound." << endl;
    }
};

class DogWithoutVirtual : public AnimalWithoutVirtual {
public:
    void speak() const {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

class Animal {
public:
    virtual void speak() const {
        cout << "Animal makes a generic sound." << endl;
    }
    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    void speak() const override {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

int main() {
    cout << "--- Without Virtual Keyword ---" << endl;
    DogWithoutVirtual dog1;
    AnimalWithoutVirtual *pet1 = &dog1;
    pet1->speak();

    cout << "\n--- With Virtual Keyword ---" << endl;
    Dog dog2;
    Animal *pet2 = &dog2;
    pet2->speak();
    return 0;
}
