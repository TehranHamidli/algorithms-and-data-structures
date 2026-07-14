#include <iostream>

using namespace std;

void largestFinder(int arr[], int size)
{

    int largeNumber = arr[0];

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] > largeNumber)
        {
            largeNumber = arr[i];
        }
    }
    cout << largeNumber;
}

int main()
{

    int size;
    cin >> size;

    int array[size];

    for (int s = 0; s < size; ++s)
    {
        cin >> array[s];
    }

    largestFinder(array, size);
}