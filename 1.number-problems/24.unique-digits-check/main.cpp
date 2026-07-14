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

    if (one == two || one == three || one == f0r ||
        two == three || two == f0r ||
        three == f0r

    )
    {

        cout << "Duplicate Digits Found" << endl;
    }
    else
    {
        cout << "All Digits are Different" << endl;
    }
}