#include <iostream>
#include "rectangleType.h"

using namespace std;

int main() {
    rectangleType yard1(10, 5); // Area 50
    rectangleType yard2(8, 4);  // Area 32
    rectangleType yard3(5, 10); // Area 50

    cout << "Yard 1: " << yard1 << endl;
    cout << "Yard 2: " << yard2 << endl;

    if (yard1 == yard3)
        cout << "Yard 1 and Yard 3 have the same area." << endl;

    if (yard1 > yard2)
        cout << "Yard 1 area is greater than Yard 2." << endl;

    rectangleType yard4 = yard1 - yard2;
    cout << "Result of Yard 1 - Yard 2: " << yard4 << endl;

    ++yard4;
    cout << "After incrementing Yard 4: " << yard4 << endl;

    return 0;
}