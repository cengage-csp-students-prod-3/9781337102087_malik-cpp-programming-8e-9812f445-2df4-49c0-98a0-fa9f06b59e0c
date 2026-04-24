#include <iostream>
using namespace std;

void starPattern(int n) {
    if (n == 0)
        return;

    // print n stars
    for (int i = 0; i < n; i++)
        cout << "*";
    cout << endl;

    // recursive call
    starPattern(n - 1);

    // print n stars again
    for (int i = 0; i < n; i++)
        cout << "*";
    cout << endl;
}

int main() {
    int lines;

    cout << "Enter number of lines: ";
    cin >> lines;

    if (lines >= 0)
        starPattern(lines);

    return 0;
}