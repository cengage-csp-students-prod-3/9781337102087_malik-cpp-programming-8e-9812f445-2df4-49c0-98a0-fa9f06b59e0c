#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

int main() {
    double feet, inches;

    while (true) {
        try {
            cout << "Enter feet: ";
            if (!(cin >> feet)) {
                throw runtime_error("invalid");
            }

            cout << "Enter inches: ";
            if (!(cin >> inches)) {
                throw runtime_error("invalid");
            }

            if (feet < 0 || inches < 0) {
                throw runtime_error("negative");
            }

            // conversion
            double totalInches = feet * 12 + inches;
            double centimeters = totalInches * 2.54;

            cout << fixed << setprecision(2);
            cout << "Equivalent length in centimeters: " << centimeters << endl;

            break; // exit loop after valid input
        }
        catch (...) {
            cout << "A non positive number is entered" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }

    return 0;
}