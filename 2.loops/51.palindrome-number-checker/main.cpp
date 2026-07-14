#include <iostream>

using namespace std;

int main()
{

    int number = 0, tailNumber = 0, reversed = 0;

    cin >> number;

    int copyNumber = number;

    while (number > 0)
    {

        tailNumber = number % 10;
        reversed = reversed * 10 + tailNumber;

        number = number / 10;
    }

    if (copyNumber == reversed)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}