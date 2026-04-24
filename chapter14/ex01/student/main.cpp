#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

int main() {
    double feet, inches;

    try {
        cin >> feet >> inches;

        if (!cin || feet < 0 || inches < 0) {
            throw runtime_error("error");
        }

        double centimeters = ((feet * 12) + inches) * 2.54;

        cout << fixed << setprecision(2);
        cout << centimeters << endl;
    }
    catch (...) {
        cout << "A non positive number is entered" << endl;
    }

    return 0;
}