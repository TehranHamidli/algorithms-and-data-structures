#include <iostream>

using namespace std;

int main()
{

    int array[3] = {1, 2, 3};

    for (int i = 0; i < 3; ++i)
    {

        // cout << "array[i] - " << array[i] << endl;

        for (int j = 0; j < 3; ++j)
        {

            cout << "array[i] - " << array[i] << " array[j] - " << array[j] << endl;
        }
    }
}