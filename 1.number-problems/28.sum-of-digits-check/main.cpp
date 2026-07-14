#include <iostream>

using namespace std;

int main()
{

    int number;

    cin >> number;

    int one = number / 1000;
    int two = (number / 100) % 10;
    int three = (number / 10) % 10;
    int f0r = number % 10;

    int result = one + two + three + f0r;

    if (result % 2 == 0 && result % 3 == 0)
    {
        cout << "Multiple of 2 and 3" << endl;
    }
    else
    {
        cout << "Not a Multiple of 2 and 3" << endl;
    }
}