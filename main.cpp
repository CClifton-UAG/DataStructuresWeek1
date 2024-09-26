#include <iostream>
#include "rectangleType.h"

using namespace std;

int main() {
    // Create two rectangle objects
    rectangleType rect1(5.0, 3.0);
    rectangleType rect2(2.0, 4.0);

    // Test operator+
    rectangleType rect3 = rect1 + rect2;
    cout << "Rectangle 3 (rect1 + rect2): " << rect3 << endl;

    // Test operator-
    rectangleType rect4 = rect1 - rect2;
    cout << "Rectangle 4 (rect1 - rect2): " << rect4 << endl;

    // Test increment operators
    ++rect1;
    cout << "After pre-increment, rect1: " << rect1 << endl;

    rect1++;
    cout << "After post-increment, rect1: " << rect1 << endl;

    // Test comparison operators
    if (rect1 == rect2) {
        cout << "rect1 is equal to rect2 in area." << endl;
    } else {
        cout << "rect1 is not equal to rect2 in area." << endl;
    }

    return 0;
}
