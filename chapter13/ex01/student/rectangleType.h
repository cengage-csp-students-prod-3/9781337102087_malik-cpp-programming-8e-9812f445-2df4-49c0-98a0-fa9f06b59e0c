#ifndef H_RECTANGLETYPE
#define H_RECTANGLETYPE

#include <iostream>

using namespace std;

class rectangleType {
    // Overloaded stream operators
    friend ostream& operator<<(ostream&, const rectangleType&);
    friend istream& operator>>(istream&, rectangleType&);

 public:
     void setDimension(double l, double w);
     double getLength() const;
     double getWidth() const;
     double area() const;
     double perimeter() const;

     // Overloaded arithmetic operators
     rectangleType operator+(const rectangleType&) const;
     rectangleType operator*(const rectangleType&) const;
     rectangleType operator-(const rectangleType&) const;

     // Overloaded increment/decrement
     rectangleType operator++();          // Pre-increment
     rectangleType operator++(int);       // Post-increment
     rectangleType operator--();          // Pre-decrement
     rectangleType operator--(int);       // Post-decrement

     // Overloaded relational operators (Based on Area)
     bool operator==(const rectangleType&) const;
     bool operator!=(const rectangleType&) const;
     bool operator<=(const rectangleType&) const;
     bool operator<(const rectangleType&) const;
     bool operator>=(const rectangleType&) const;
     bool operator>(const rectangleType&) const;

     rectangleType(double l = 0, double w = 0);

 protected:
     double length;
     double width;
};

#endif