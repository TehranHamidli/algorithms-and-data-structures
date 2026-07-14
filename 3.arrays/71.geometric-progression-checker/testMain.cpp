#include <iostream>

using namespace std;

int main()
{

    float array[5] = {1, 2, 5, 10, 20};

    float firstIndex = array[0];
    float secondIndex = array[1];

    float ratio = secondIndex / firstIndex;

    for (int i = 2; i < 5; ++i)
    {

        if (float(array[i + 1]) / float(array[i] ) == ratio)
        {

            cout << float(array[i + 1]) / float(array[i]) << endl;
            // cout << "Yes" << endl;
            // break;
        }
        else
        {
  cout << float(array[i + 1]) / float(array[i]) << endl;
            // cout << "No" << endl;
            // break; 
        }
    }
}