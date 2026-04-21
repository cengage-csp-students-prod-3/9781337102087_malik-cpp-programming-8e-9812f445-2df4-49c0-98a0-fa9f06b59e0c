#include <iostream>
#include "rectangleType.h"

using namespace std;

void rectangleType::setDimension(double l, double w) {
    length = (l >= 0) ? l : 0;
    width = (w >= 0) ? w : 0;
}

double rectangleType::getLength() const { return length; }
double rectangleType::getWidth() const { return width; }
double rectangleType::area() const { return length * width; }
double rectangleType::perimeter() const { return 2 * (length + width); }

// Part 1: Increment/Decrement
rectangleType rectangleType::operator++() {
    length++;
    width++;
    return *this;
}

rectangleType rectangleType::operator--() {
    if (length > 1 && width > 1) {
        length--;
        width--;
    }
    return *this;
}

// Part 2: Subtraction
rectangleType rectangleType::operator-(const rectangleType& other) const {
    rectangleType temp;
    if (length > other.length && width > other.width) {
        temp.length = length - other.length;
        temp.width = width - other.width;
    } else {
        cout << "Resulting dimensions are not positive." << endl;
        temp.length = length;
        temp.width = width;
    }
    return temp;
}

// Part 3: Relational Operators (Area-based)
bool rectangleType::operator==(const rectangleType& other) const {
    return (this->area() == other.area());
}

bool rectangleType::operator!=(const rectangleType& other) const {
    return (this->area() != other.area());
}

bool rectangleType::operator>(const rectangleType& other) const {
    return (this->area() > other.area());
}

bool rectangleType::operator<(const rectangleType& other) const {
    return (this->area() < other.area());
}

// Basic Constructor
rectangleType::rectangleType(double l, double w) {
    setDimension(l, w);
}

// Stream Overloading
ostream& operator<<(ostream& os, const rectangleType& rect) {
    os << "Length = " << rect.length << "; Width = " << rect.width;
    return os;
}

istream& operator>>(istream& is, rectangleType& rect) {
    is >> rect.length >> rect.width;
    return is;
}