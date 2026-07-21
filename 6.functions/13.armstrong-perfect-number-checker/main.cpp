#include <iostream>
#include <cmath>
using namespace std;

// armstrong -- verilen ededin her biri reqeminin verilen eded qeder quvvete yukseldib toplayanda alinan netice verilen edede beraberdirse armstrongdur;

// perfect number -- verilen ededin butun bolenlerinin cemi verilen edede beraberdirse perfect number adlanir;

int numberLength(int number)
{
    int length = 1;

    for (int i = 1; i < number; ++i)
    {

        number = number / 10;
        length++;
    }

    return length;
}

void armstrongChecker(int number)
{
    int original = number;
    int len = numberLength(number);
    int result = 0;
    for (int i = 0; i < len; ++i)
    {
        int digit = number % 10;

        number = number / 10;

        result += pow(digit, len);
    }

    if (result == original)
        cout << "The " << original << " is an Armstrong number.";
    else
        cout << "The " << original << " is not an Armstrong number.";
}

int main()
{

    int number;

    cin >> number;

    armstrongChecker(number);
    // perfectNumberChecker(number);
}