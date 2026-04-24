#include <iostream>
using namespace std;

void insertionSort(int list[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = list[i];
        int j = i - 1;

        while (j >= 0 && list[j] > key)
        {
            list[j + 1] = list[j];
            j--;
        }

        list[j + 1] = key;
    }
}

int sequentialSearchSorted(int list[], int size, int item)
{
    for (int i = 0; i < size; i++)
    {
        if (list[i] == item)
            return i;

        if (list[i] > item) // stop early because sorted
            break;
    }

    return -1;
}

int main()
{
    const int SIZE = 10;
    int list[SIZE];
    int searchItem;

    cout << "Enter 10 digits: ";
    for (int i = 0; i < SIZE; i++)
        cin >> list[i];

    insertionSort(list, SIZE);

    cout << "Enter digit to search: ";
    cin >> searchItem;

    int position = sequentialSearchSorted(list, SIZE, searchItem);

    if (position != -1)
        cout << searchItem << " is found at position " << position << endl;
    else
        cout << searchItem << " is not in the list" << endl;

    return 0;
}