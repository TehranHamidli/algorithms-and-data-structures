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

    if (number % one == 0 && number % two == 0 && number % three == 0 && number % f0r == 0)
    {
        cout << "Divisible by All Digits" << endl;
    }
    else
    {
        cout << "Not Divisible by All Digits" << endl;
    }


}