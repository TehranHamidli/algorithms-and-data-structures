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

    int oneExponent = one * one * one * one;
    int twoExponent = two * two * two * two;
    int threeExponent = three * three * three * three;
    int forExponent = f0r * f0r * f0r * f0r;

    int resultArmstrong = oneExponent + twoExponent + threeExponent + forExponent;

    if (resultArmstrong == number)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not Armstrong Number" << endl;
    }
}