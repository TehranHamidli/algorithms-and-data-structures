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

    bool simmetric = true;

    for (int i = 0; i < size; ++i)
    {

        if (array[i] != array[(size - 1) - i])
        {
            simmetric = false;
            break;
        }
    }

    if (simmetric)
    {
        cout << "Symmetrical" << endl;
    }
    else
    {
        cout << "Not Symmetrical" << endl;
    }
}