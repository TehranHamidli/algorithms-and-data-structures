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

    int verilenReqem;
    cin >> verilenReqem;


    int secondLast = array[size - 2];

    if (verilenReqem <= array[0 + 1])
    {
        cout << "Minimum" << endl;
    }
    else if (verilenReqem >= secondLast)
    {
        cout << "Maximum" << endl;
    }
    else
    {
        cout << "Mean" << endl;
    }
}