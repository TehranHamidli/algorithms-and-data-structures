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

    int firstIndex = array[0];
    int secondIndex = array[1];

    int difference = secondIndex - firstIndex;

    for (int i = 2; i < size; ++i)
    {
        if (array[i + 1] - array[i] == difference)
        {
            cout << "Yes" << endl;
            break;
        }
        else
        {
            cout << "No" << endl;
            break;
        }
    }
}