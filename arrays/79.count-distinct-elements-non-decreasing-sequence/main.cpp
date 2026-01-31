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

    int distinctElements = 0;

    for (int i = 0; i < size; ++i)
    {
        if (array[i] != array[i + 1])
        {

            distinctElements++;
        }
    }

    cout << "Distinct Elements: " << distinctElements << endl;
}