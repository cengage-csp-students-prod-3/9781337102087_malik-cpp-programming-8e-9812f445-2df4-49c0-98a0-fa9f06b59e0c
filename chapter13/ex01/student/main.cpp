#include <iostream>
#include "rectangleType.h"
using namespace std;

int main() {
    rectangleType r1(10, 5);
    rectangleType r2(4, 3);

    cout << "r1: " << r1 << endl;
    cout << "r2: " << r2 << endl;

    ++r1;
    cout << "\nAfter ++r1: " << r1 << endl;

    r2++;
    cout << "After r2++: " << r2 << endl;

    rectangleType r3 = r1 - r2;
    cout << "\nr1 - r2: " << r3 << endl;

    if (r1 > r2)
        cout << "\nr1 is larger than r2" << endl;

    --r1;
    cout << "\nAfter --r1: " << r1 << endl;

    rectangleType r4;
    cout << "\nEnter length and width: ";
    cin >> r4;

    cout << "You entered: " << r4 << endl;

    return 0;
}