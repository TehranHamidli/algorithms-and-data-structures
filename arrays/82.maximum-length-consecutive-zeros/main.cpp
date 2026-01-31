#include <iostream>

using namespace std;

int main()
{

    int size;

    cin >> size;

    int array[size];

    for (int s = 0; s < size; ++s)
    {
        cin >> array[s];
    }

    int maxZeroCounter = 0;
    int currentZeroCounter = 0;

    for (int i = 0; i < size; ++i)
    {

        if (array[i] == 0)
        {
            currentZeroCounter++;
            if (currentZeroCounter > maxZeroCounter)
            {
                maxZeroCounter = currentZeroCounter;
            }
        }
        else
        {
            currentZeroCounter = 0;
        }
    }

    cout << "Length of Maximum Consecutive Zeros: " << maxZeroCounter << endl;
}