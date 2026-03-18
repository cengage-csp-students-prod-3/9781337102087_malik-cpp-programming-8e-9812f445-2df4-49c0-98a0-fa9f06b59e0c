#include <iostream>
#include "extClockType.h"

using namespace std;

int main()
{
    // Test default constructor
    extClockType clock1;
    cout << "Clock1 (default): ";
    clock1.printTime();
    cout << endl;

    // Test parameterized constructor
    extClockType clock2(14, 35, 50, "EST");
    cout << "Clock2: ";
    clock2.printTime();
    cout << endl;

    // Test setters
    clock1.setTime(10, 20, 30);
    clock1.setTimeZone("PST");

    cout << "Clock1 after setting: ";
    clock1.printTime();
    cout << endl;

    // Test increment
    clock1.incrementSeconds();
    cout << "Clock1 after +1 sec: ";
    clock1.printTime();
    cout << endl;

    // Test equality
    extClockType clock3(10, 20, 31, "PST");

    if (clock1.equalTime(clock3))
        cout << "Clock1 and Clock3 have the same time." << endl;
    else
        cout << "Clock1 and Clock3 have different times." << endl;

    return 0;
}