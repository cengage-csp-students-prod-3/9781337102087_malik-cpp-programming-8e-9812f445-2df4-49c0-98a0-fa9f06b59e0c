#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

int main() {
    double feet, inches, centimeters;
    bool success = false;

    // Use a loop to allow the user to try again on failure
    while (!success) {
        try {
            cout << "Enter length in feet: ";
            if (!(cin >> feet)) {
                throw string("A non positive number is entered");
            }

            cout << "Enter length in inches: ";
            if (!(cin >> inches)) {
                throw string("A non positive number is entered");
            }

            // Check for negative numbers
            if (feet < 0 || inches < 0) {
                throw string("A non positive number is entered");
            }

            // Conversion logic
            double totalInches = (feet * 12) + inches;
            centimeters = totalInches * 2.54;

            // Output formatting
            cout << fixed << setprecision(2);
            cout << "The equivalent length in centimeters is: " << centimeters << endl;
            
            success = true; // Exit loop on successful calculation

        } catch (string errorMessage) {
            cout << errorMessage << endl;
            
            // Clear the error state and ignore bad input in the buffer
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
            cout << "Please try again." << endl;
        }
    }

    return 0;
}