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

    int max = array[0];
    int min = array[0];

    for (int i = 1; i < size; ++i)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    cout << "minimum = " << min << ", maximum = " << max << endl;
}