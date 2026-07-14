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

    int target;
    cin >> target;

    bool found = false;
    int lastIndex = -1;

    for (int i = 0; i < size; ++i)
    {
        if (array[i] == target)
        {
            found = true;
            lastIndex = i;
        }
    }

    if (found)
    {
        cout << "Last Occurrence Index: " << lastIndex << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
}