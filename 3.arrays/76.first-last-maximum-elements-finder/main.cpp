#include <iostream>

using namespace std;


int main()
{


    int size;

    cin >> size;

    int array[size];

    for (int s = 0; s < size; s++)
    {
        cin >> array[s];
    }

    int maxNumber = array[0];
    int maxNumberCounter = 0;
    int firstMaxIndex = 0;
    int lastMaxIndex = 0;

    for (int i = 0; i < size; ++i)
    {

        if (array[i] > maxNumber)
        {
            maxNumberCounter = 0;
            maxNumber = array[i];
            firstMaxIndex = i;
        }
     
        if (maxNumber == array[i])
        {
            maxNumberCounter++;
            lastMaxIndex = i;
        }
    }

    cout << "The maximum element is: " << maxNumber << endl;
    cout << "The number of occurrences of the maximum element is: " << maxNumberCounter << endl;
    cout << "The position of the first maximum element is: " << firstMaxIndex << endl;
    cout << "The position of the last maximum element is: " << lastMaxIndex << endl;
}