#include <iostream>


using namespace std;


int main() {
       int size;

    cin >> size;

    int array[size];

    for (int s = 0; s < size; ++s){
        cin >> array[s];
    }



    for (int i = 0; i < size; ++i)
    {
        for (int j = i + 1; j < size; ++j)
        {

            if (array[i] > array[j])
            {
                int save = array[i];

                array[i] = array[j];
                array[j] = save;
            }
        }
    }
    for (int i = 0; i < size; ++i)

    {

        cout << array[i] << " ";
    }

}