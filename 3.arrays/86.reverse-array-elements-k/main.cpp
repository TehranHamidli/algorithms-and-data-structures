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

    int changeIndex;

    cin >> changeIndex;

    int start = 0;
    int end = changeIndex - 1;

    while (start < end)
    {
        int save = array[start];
        array[start] = array[end];
        array[end] = save;
        start++;
        end--;
    }

    for (int i = 0; i < size; ++i)
    {
        cout << array[i] << " ";
    }
}
