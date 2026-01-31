#include <iostream>

using namespace std;

int main()
{

    int size;

    cin >> size;

    int arithmetic[size];

    for (int s = 0; s < size; ++s)
    {
        cin >> arithmetic[s];
    }

    int arithmeticDifference = arithmetic[1] - arithmetic[0];

    bool stop = true;
    for (int i = 2; i < 4; ++i)
    {

        if (arithmetic[i + 1] - arithmetic[i] != arithmeticDifference)
        {

            stop = false;
            break;
        }
    }

    if (stop)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}