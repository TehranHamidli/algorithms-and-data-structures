#include <iostream>

using namespace std;

int main()

{
    int size;

    cin >> size;

    float geometricArray[size];

    for (int s = 0; s < size; ++s)
    {
        cin >> geometricArray[s];
    }

    float divisions = geometricArray[1] / geometricArray[0];

    int stop = true;

    for (int i = 1; i < 4; ++i)
    {

        if ((float)geometricArray[i + 1] / (float)geometricArray[i] != divisions)
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