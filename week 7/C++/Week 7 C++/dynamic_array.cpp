// ACTIVITY 4: DYNAMIC ARRAY WRAPPER (MINI-VECTOR)
#include <iostream>
#include <stdexcept>
using namespace std;

class DynamicArray {
private:
    int* data;
    int size;
    int capacity;

public:
    explicit DynamicArray(int initialCapacity)
        : data(nullptr), size(0), capacity(initialCapacity) {
        if (initialCapacity <= 0) {
            throw invalid_argument("Initial capacity must be greater than zero.");
        }
        data = new int[capacity];
    }

    // Destructor releases the dynamically allocated array.
    ~DynamicArray() {
        delete[] data;
    }

    // Prevent accidental shallow copies of the owning pointer.
    DynamicArray(const DynamicArray&) = delete;
    DynamicArray& operator=(const DynamicArray&) = delete;

    void push_back(int value) {
        if (size == capacity) {
            int newCapacity = capacity * 2;
            int* newData = new int[newCapacity];

            for (int i = 0; i < size; i++) {
                newData[i] = data[i];
            }

            delete[] data;
            data = newData;
            cout << "[Resized capacity from " << capacity
                 << " to " << newCapacity << "]" << endl;
            capacity = newCapacity;
        }

        data[size] = value;
        size++;
    }

    void display() const {
        cout << "Array (Size: " << size << ", Capacity: " << capacity << "): ";
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    DynamicArray myArray(2);
    cout << "Created dynamic array with capacity 2." << endl;

    myArray.push_back(10);
    myArray.push_back(20);
    myArray.display();

    cout << "\nAdding third element..." << endl;
    myArray.push_back(30);
    myArray.display();

    cout << "\nAdding fourth and fifth elements..." << endl;
    myArray.push_back(40);
    myArray.push_back(50);
    myArray.display();

    // Destructor is called automatically when myArray goes out of scope.
    return 0;
}
