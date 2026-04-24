#include "rectangleType.h"

rectangleType::rectangleType(double l, double w) {
    if (l > 0 && w > 0) {
        length = l;
        width = w;
    } else {
        length = 1;
        width = 1;
    }
}

double rectangleType::area() const {
    return length * width;
}

// pre increment
rectangleType& rectangleType::operator++() {
    length++;
    width++;
    return *this;
}

// post increment
rectangleType rectangleType::operator++(int) {
    rectangleType temp = *this;
    length++;
    width++;
    return temp;
}

// pre decrement
rectangleType& rectangleType::operator--() {
    if (length - 1 > 0 && width - 1 > 0) {
        length--;
        width--;
    } else {
        cout << "Dimensions must remain positive" << endl;
    }
    return *this;
}

// post decrement
rectangleType rectangleType::operator--(int) {
    rectangleType temp = *this;

    if (length - 1 > 0 && width - 1 > 0) {
        length--;
        width--;
    } else {
        cout << "Dimensions must remain positive" << endl;
    }

    return temp;
}

// subtraction
rectangleType rectangleType::operator-(const rectangleType& other) const {
    double l = length - other.length;
    double w = width - other.width;

    if (l <= 0 || w <= 0) {
        cout << "Resulting dimensions must be positive" << endl;
        return *this;
    }

    return rectangleType(l, w);
}

// relational operators (area based)
bool rectangleType::operator==(const rectangleType& other) const {
    return area() == other.area();
}

bool rectangleType::operator!=(const rectangleType& other) const {
    return area() != other.area();
}

bool rectangleType::operator<(const rectangleType& other) const {
    return area() < other.area();
}

bool rectangleType::operator>(const rectangleType& other) const {
    return area() > other.area();
}

bool rectangleType::operator<=(const rectangleType& other) const {
    return area() <= other.area();
}

bool rectangleType::operator>=(const rectangleType& other) const {
    return area() >= other.area();
}

// output
ostream& operator<<(ostream& os, const rectangleType& r) {
    os << "Length: " << r.length
       << " Width: " << r.width
       << " Area: " << r.area();
    return os;
}

// input
istream& operator>>(istream& is, rectangleType& r) {
    is >> r.length >> r.width;

    if (r.length <= 0 || r.width <= 0) {
        cout << "Invalid dimensions. Reset to 1x1" << endl;
        r.length = 1;
        r.width = 1;
    }

    return is;
}