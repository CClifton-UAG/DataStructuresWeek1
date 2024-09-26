#ifndef RECTANGLETYPE_H
#define RECTANGLETYPE_H

#include <iostream>
using namespace std;

class rectangleType
{
public:
    void setDimension(double l, double w);
    double getLength() const;
    double getWidth() const;
    double area() const;
    double perimeter() const;

    // Operator overloads
    rectangleType operator++();        // Pre-increment
    rectangleType operator++(int);     // Post-increment
    rectangleType operator--();        // Pre-decrement
    rectangleType operator--(int);     // Post-decrement
    rectangleType operator+(const rectangleType& rectangle) const;
    rectangleType operator-(const rectangleType& rectangle) const;
    rectangleType operator*(const rectangleType& rectangle) const;
    bool operator==(const rectangleType& rectangle) const;
    bool operator!=(const rectangleType& rectangle) const;
    bool operator<=(const rectangleType& rectangle) const;
    bool operator<(const rectangleType& rectangle) const;
    bool operator>=(const rectangleType& rectangle) const;
    bool operator>(const rectangleType& rectangle) const;

    // Stream insertion/extraction overloads
    friend ostream& operator<<(ostream&, const rectangleType&);
    friend istream& operator>>(istream&, rectangleType&);

    // Constructors
    rectangleType(double l = 0, double w = 0);

protected:
    double length;
    double width;
};

#endif
