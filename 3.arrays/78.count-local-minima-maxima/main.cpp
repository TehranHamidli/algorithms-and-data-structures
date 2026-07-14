#include <iostream>

using namespace std;

int main()
{


    int size;

    cin >> size;

    int array[size];

    for (int s = 0; s < size; ++s){
        cin >> array[s];
    }

    int localMax = 0;
    int localMin = 0;


    for (int i = 1; i < size - 1; ++i)
    {


        if(array[i] < array[i - 1] && array[i] < array[i + 1]){
            localMin++;
        }
        if(array[i] > array[i - 1] && array[i] > array[i + 1] ){
            localMax++;
        }
    }

    cout << "Local Minima: " << localMin << endl;
    cout << "Local Maxima: " << localMax << endl;
}