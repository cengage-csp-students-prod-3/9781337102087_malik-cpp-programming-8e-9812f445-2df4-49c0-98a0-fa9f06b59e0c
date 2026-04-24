#ifndef RECTANGLETYPE_H
#define RECTANGLETYPE_H

#include <iostream>
using namespace std;

class rectangleType {
protected:
    double length;
    double width;

public:
    rectangleType(double l = 1, double w = 1);

    double area() const;

    // increment / decrement
    rectangleType& operator++();     // pre ++
    rectangleType operator++(int);   // post ++
    rectangleType& operator--();     // pre --
    rectangleType operator--(int);   // post --

    // subtraction
    rectangleType operator-(const rectangleType& other) const;

    // relational (area based)
    bool operator==(const rectangleType& other) const;
    bool operator!=(const rectangleType& other) const;
    bool operator<(const rectangleType& other) const;
    bool operator>(const rectangleType& other) const;
    bool operator<=(const rectangleType& other) const;
    bool operator>=(const rectangleType& other) const;

    // stream operators
    friend ostream& operator<<(ostream& os, const rectangleType& r);
    friend istream& operator>>(istream& is, rectangleType& r);
};

#endif