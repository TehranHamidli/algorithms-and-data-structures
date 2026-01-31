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

    int counter = 0;

    for (int i = 0; i < size; ++i)
    {

        bool isDublicate = false;

        for (int j = 0; j < i; ++j)
        {

            cout << array[j] << " ";
            if (array[i] == array[j])
            {
                isDublicate = true;
                break;
            }
        }

        if (!isDublicate)
        {
            counter++;
        }
    }
    cout << "Distinct Elements: " << counter << endl;
}