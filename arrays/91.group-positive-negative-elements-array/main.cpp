#include <iostream>

using namespace std;

int main()
{
    // int array[5] = {-2, 4, 7, -3, 1};

    int size;

    cin >> size;

    int array[size];

    for (int s = 0; s < size; ++s)
    {
        cin >> array[s];
    }

    int negativeCount = 0;
    int positiveCount = 0;

    int negativeArray[size];
    int positiveArray[size];

    for (int i = 0; i < size; ++i)
    {
        if (array[i] < 0)
        {

            negativeArray[negativeCount] = array[i];
            negativeCount++;
        }
        if (array[i] > 0)
        {
            positiveArray[positiveCount] = array[i];
            positiveCount++;
        }
    }

    for (int i = 0; i < positiveCount; ++i)
    {
        cout << positiveArray[i] << " ";
    }

    for (int i = 0; i < negativeCount; ++i)
    {
        cout << negativeArray[i] << " ";
    }
}