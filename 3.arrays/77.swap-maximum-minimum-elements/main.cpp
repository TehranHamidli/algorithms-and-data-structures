#include <iostream>

using namespace std;

int main()
{

    // int array[6] = {8, 3, 10, 5, 2, 7};

    int size;

    cin >> size;


    int array[size];

    for (int s = 0; s < size; ++s){
        cin >> array[s];
    }

    int maxNumber = array[0];
    int minNumber = array[0];

    int maxNumberIndex = 0;
    int minNumberIndex = 0;

    for (int i = 0; i < size; ++i)
    {

        if (array[i] > maxNumber)
        {
            maxNumber = array[i];
            maxNumberIndex = i;
        }
        if (array[i] < minNumber)
        {
            minNumber = array[i];
            minNumberIndex = i;
        }

     
    }

       int maxNumberRemember = array[maxNumberIndex];
        array[maxNumberIndex] = array[minNumberIndex];
        array[minNumberIndex] = maxNumberRemember;

        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
}