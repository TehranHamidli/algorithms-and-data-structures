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

    int x = array[size - 1]; 
    for (int i = size - 1; i > 0; i--)
    {
        array[i] = array[i - 1]; 
    }

    array[0] = x; 

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

}