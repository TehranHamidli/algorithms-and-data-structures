#include <iostream>

using namespace std;

int main()
{

    int evenNumber;

    cin >> evenNumber;

    if (evenNumber % 2 == 0)
    {
        cout << "The number is even." << endl;
    }
    else
    {
        cout << "The number is not even." << endl;
    }
}