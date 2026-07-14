#include <iostream>

using namespace std;

int factorial(int number)
{
    int factorialNumber = 1;

    for (int i = 1; i <= number; ++i)
    {

        factorialNumber = i * factorialNumber;
    }

    return factorialNumber;
}

int sumFactorial(int factorialNumber)
{

    int factorialSum = 0;

    for (int i = 1; i <= factorialNumber; ++i)
    {

        factorialSum = factorialSum + ((int)factorial(i) / i);
    }

    cout << factorialSum;

    return factorialSum;
}

int main()
{
    int n;

    cin >> n;

    sumFactorial(n);
}