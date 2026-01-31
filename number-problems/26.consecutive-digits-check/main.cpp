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

    if ((one == 3 && two == 7) || (one == 7 && two == 3) ||
        (two == 3 && three == 7) || (two == 7 && three == 3) ||
        (three == 3 && f0r == 7) || (three == 7 && f0r == 3))
    {
        cout << "Consecutive Digits Found" << endl;
    }
    else
    {
        cout << "Consecutive Digits Not Found" << endl;
    }
}