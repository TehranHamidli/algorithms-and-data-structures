#include <iostream>

using namespace std;

int main()
{

    int number;

    cin >> number;

    int one = number / 10000;
    int two = (number / 1000) % 10;
    int f0r = (number / 10) % 10;
    int five = number % 10;

    if (one == five && two == f0r)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
}