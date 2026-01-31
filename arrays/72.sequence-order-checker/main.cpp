#include <iostream>

using namespace std;

int main()
{

    int size;

    cin >> size;

    int sequence[size];

    bool ascending = true;
    bool descending = true;

    for (int s = 0; s < size; ++s)
    {
        cin >> sequence[s];
    }

    for (int i = 0; i < size - 1; ++i)
    {

        if (sequence[i] < sequence[i + 1])
        {

            descending = false;
        }
        else if (sequence[i] > sequence[i + 1])
        {

            ascending = false;
        }
    }

    if (ascending)
        cout << "Ascending" << endl;
    else if (descending)
        cout << "Descending" << endl;
    else
        cout << "Neither" << endl;
}