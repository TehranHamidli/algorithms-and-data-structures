#include <iostream>

using namespace std;

int main()
{

    int size;
    cin >> size;

    int evenNumbers[size];

    for (int s = 0; s < size; ++s)
    {
        cin >> evenNumbers[s];
    }

    int even = 0;
    for (int i = 0; i < size; ++i)
    {

        if (evenNumbers[i] % 2 == 0 && i % 2 == 0)
        {
            even++;
        }
    }

    if (even == 0)
    {
        cout << 0 << endl;
    }
    else if (even > 0)
    {
        cout << even << endl;
    }
}

10 7 4 12 9 6