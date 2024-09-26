// Name: Carrie Clifton - G00199718
// Course: Data Structures CS256
// Date: 24 SEP 2024

#include <iostream>
using namespace std;

class boxType {
private:
    double length, width, height;
public:
    // Constructor
    boxType(double l = 0, double w = 0, double h = 0) : length(l), width(w), height(h) {}

    // Getter functions to access box dimensions
    double getLength() const { return length; }
    double getWidth() const { return width; }
    double getHeight() const { return height; }

    // Friend functions for non-member operator overloading
    friend boxType operator+(const boxType& box1, const boxType& box2);  // Addition
    friend bool operator==(const boxType& box1, const boxType& box2);    // Equality
    friend ostream& operator<<(ostream& os, const boxType& box);         // Output stream
};

// Non-member operator overloading: Addition
boxType operator+(const boxType& box1, const boxType& box2) {
    return boxType(box1.length + box2.length, box1.width + box2.width, box1.height + box2.height);
}

// Non-member operator overloading: Equality
bool operator==(const boxType& box1, const boxType& box2) {
    return (box1.length == box2.length && box1.width == box2.width && box1.height == box2.height);
}

// Non-member operator overloading: Output stream (<<)
ostream& operator<<(ostream& os, const boxType& box) {
    os << "Box Dimensions: " << box.length << " x " << box.width << " x " << box.height;
    return os;
}

// Main function to test the boxType class and overloaded operators
int main() {
    // Create two boxes
    boxType box1(2, 3, 4);
    boxType box2(5, 6, 7);

    // Test addition operator
    boxType box3 = box1 + box2;

    // Display the result of the addition
    cout << "After adding box1 and box2:" << endl;
    cout << box3 << endl;

    // Test equality operator
    if (box1 == box2) {
        cout << "Box1 and Box2 are equal." << endl;
    } else {
        cout << "Box1 and Box2 are not equal." << endl;
    }

    return 0;
}
