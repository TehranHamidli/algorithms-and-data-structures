#include <iostream>

using namespace std;

int main()
{
    // int array[10] = {2, 3, 1, 2, 4, 6, 8, 5, 9, 10};

int size;


cin >> size;


int array[size];


for (int s = 0; s < size; ++s){
    cin >> array[s];
}


    int maxLenght = 0;

    int cariLength = 0;

    for (int i = 1; i < size; ++i)
    {
        if (array[i] > array[i - 1])
        {
            cariLength++;

            if (cariLength > maxLenght)
            {
                maxLenght = cariLength;
            }
          
        }
          else
            {
                cariLength = 1;
            }
    }

    cout << "Length of Largest Ascending Portion:" << maxLenght << endl;
}