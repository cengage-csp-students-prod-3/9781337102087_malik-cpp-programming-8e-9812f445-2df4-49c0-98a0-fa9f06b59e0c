#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    // We use a temporary buffer to capture the initial input
    char temp[100]; 
    int len;

    cout << "Enter a string: ";
    cin.get(temp, 100);

    len = strlen(temp);

    // Task #02: Using dynamic array allocation with 'new'
    char *str = new char[len + 1];

    // Copy the contents from temp to our dynamic array
    strcpy(str, temp);

    cout << endl;
    cout << "String in upper case letters is:" << endl;

    // Task #01: Process varying lengths and print in uppercase
    for (int i = 0; i < len; i++) {
        cout << static_cast<char>(toupper(str[i]));
    }
    
    cout << endl;

    // Deallocate the memory
    delete[] str;

    return 0;
}