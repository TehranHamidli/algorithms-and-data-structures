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

    if (one == 3 || two == 3 || three == 3 || f0r == 3)
    {
        cout << "Digit 3 Found" << endl;
    }
    else
    {
        cout << "Digit 3 Not Found" << endl;
    }
}