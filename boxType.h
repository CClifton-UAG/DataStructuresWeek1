#ifndef H_boxType
#define H_boxType

#include "rectangleType.h"

class boxType : public rectangleType {
public:
    // Constructor with parameters
    boxType(double l = 0, double w = 0, double h = 0);

    // Set dimensions
    void setDimension(double l, double w, double h);

    // Getter for height
    double getHeight() const;

    // Volume calculation
    double volume() const;

    // Operator overloads
    boxType operator++();   // Pre-increment
    boxType operator++(int); // Post-increment
    boxType operator--();   // Pre-decrement
    boxType operator--(int); // Post-decrement

    boxType operator+ (const boxType& box) const;
    boxType operator- (const boxType& box) const;
    boxType operator* (const boxType& box) const;

    bool operator== (const boxType& box) const;
    bool operator!= (const boxType& box) const;
    bool operator<= (const boxType& box) const;
    bool operator<  (const boxType& box) const;
    bool operator>= (const boxType& box) const;
    bool operator>  (const boxType& box) const;

    // Overload stream operators
    friend ostream& operator<<(ostream& os, const boxType& box);
    friend istream& operator>>(istream& is, boxType& box);

private:
    double height;
};

#endif
