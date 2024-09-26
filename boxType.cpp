#include "boxType.h"
#include <cassert>

// Constructor
boxType::boxType(double l, double w, double h) : rectangleType(l, w) {
    height = h >= 0 ? h : 0;
}

// Set dimensions
void boxType::setDimension(double l, double w, double h) {
    rectangleType::setDimension(l, w);
    height = h >= 0 ? h : 0;
}

// Get height
double boxType::getHeight() const {
    return height;
}

// Calculate volume
double boxType::volume() const {
    return getLength() * getWidth() * height;
}

// Pre-increment
boxType boxType::operator++() {
    rectangleType::operator++();
    ++height;
    return *this;
}

// Post-increment
boxType boxType::operator++(int) {
    boxType temp = *this;
    rectangleType::operator++(0);
    height++;
    return temp;
}

// Pre-decrement
boxType boxType::operator--() {
    assert(height > 0);
    rectangleType::operator--();
    --height;
    return *this;
}

// Post-decrement
boxType boxType::operator--(int) {
    boxType temp = *this;
    rectangleType::operator--(0);
    height--;
    return temp;
}

// Overload +
boxType boxType::operator+ (const boxType& box) const {
    return boxType(getLength() + box.getLength(), getWidth() + box.getWidth(), height + box.height);
}

// Overload -
boxType boxType::operator- (const boxType& box) const {
    assert(getLength() >= box.getLength() && getWidth() >= box.getWidth() && height >= box.height);
    return boxType(getLength() - box.getLength(), getWidth() - box.getWidth(), height - box.height);
}

// Overload *
boxType boxType::operator* (const boxType& box) const {
    return boxType(getLength() * box.getLength(), getWidth() * box.getWidth(), height * box.height);
}

// Overload ==
bool boxType::operator== (const boxType& box) const {
    return volume() == box.volume();
}

// Overload !=
bool boxType::operator!= (const boxType& box) const {
    return volume() != box.volume();
}

// Overload <=
bool boxType::operator<= (const boxType& box) const {
    return volume() <= box.volume();
}

// Overload <
bool boxType::operator< (const boxType& box) const {
    return volume() < box.volume();
}

// Overload >=
bool boxType::operator>= (const boxType& box) const {
    return volume() >= box.volume();
}

// Overload >
bool boxType::operator> (const boxType& box) const {
    return volume() > box.volume();
}

// Overload stream insertion (<<)
ostream& operator<<(ostream& os, const boxType& box) {
    os << "Length = " << box.getLength() << "; Width = " << box.getWidth() << "; Height = " << box.height;
    return os;
}

// Overload stream extraction (>>)
istream& operator>>(istream& is, boxType& box) {
    double l, w, h;
    is >> l >> w >> h;
    box.setDimension(l, w, h);
    return is;
}