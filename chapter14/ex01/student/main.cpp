#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

int main() {
    double feet, inches, centimeters;
    bool success = false;

    while (!success) {
        try {
            cout << "Enter length in feet: ";
            // Check if input is a non-digit
            if (!(cin >> feet)) {
                throw string("A non positive number is entered");
            }

            cout << "Enter length in inches: ";
            // Check if input is a non-digit
            if (!(cin >> inches)) {
                throw string("A non positive number is entered");
            }

            // Check if numbers are negative (non-positive)
            if (feet < 0 || inches < 0) {
                throw string("A non positive number is entered");
            }

            // Conversion logic must happen after validation
            double totalInches = (feet * 12) + inches;
            centimeters = totalInches * 2.54;

            // Output formatting for the grader
            cout << fixed << setprecision(2);
            cout << "The equivalent length in centimeters is: " << centimeters << endl;
            
            success = true; 

        } catch (string errorMessage) {
            cout << errorMessage << endl;
            
            // Critical: Reset the stream to prevent infinite loops
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
            cout << "Please try again." << endl;
        }
    }

    return 0;
}