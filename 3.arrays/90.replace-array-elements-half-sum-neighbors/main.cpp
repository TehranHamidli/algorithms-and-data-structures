#include <iostream>
using namespace std;

int main()
{

    int size;

    cin >> size;

    float array[size];
    ;

    for (int s = 0; s < size; ++s)
    {
        cin >> array[s];
    }

    float newArray[size];

    newArray[0] = array[0];
    newArray[size - 1] = array[size - 1];


    for (int i = 1; i < size - 1; ++i)
    {
        newArray[i] = (array[i - 1] + array[i + 1]) / 2;
    }

    for (int i = 0; i < size; ++i)
    {
        cout << newArray[i] << " ";
    }
}