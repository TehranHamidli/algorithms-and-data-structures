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

    int *ptr;

    ptr = array;

    int sum = 0;

    for (int i = 0; i < 5; ++i)
    {

        sum += ptr[i];
    }

    cout << "Sum of array elements: " << sum << endl;
}