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

    int checkArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int counter = 0;

    for (int i = 0; i < size; ++i)
    {
        bool stop = false;
        for (int j = 0; j < 10; ++j)
        {
            if (array[i + j] != checkArray[j])
            {

                stop = true;

                break;
            }
        }

        if (!stop)
        {
            counter++;
        }
    }

    cout << "Occurrences of Subsequence: " << counter << endl;
}