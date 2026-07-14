#include <iostream>

using namespace std;



void primeNumberChecker(int number)
{
    int count = 0;

    for (int i = 1; i <= number; ++i)
    {


        if (number % i == 0)
        {
            count++;
        }
      
    }

    if (count == 2)
    {
        cout << "The number " << number << " is a prime number";
    }
    else
    {
        cout << "The number " << number << " is not a prime number";
    }
}

int main()
{

    int number;

    cin >> number;

    primeNumberChecker(number);
}