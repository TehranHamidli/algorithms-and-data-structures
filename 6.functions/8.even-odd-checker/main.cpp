#include <iostream>

using namespace std;

void oddorEvenCheck(int number)
{

    if (number % 2 != 0)
    {
        cout << "The entered number is odd";
    }
    else
    {
        cout << "The entered number is even";
    }
}

int main()
{

    int number;

    cin >> number;

    oddorEvenCheck(number);
}