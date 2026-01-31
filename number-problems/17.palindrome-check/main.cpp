#include <iostream>

using namespace std;

int main()
{

    int number; 

    cin >> number;

    int firstDigit = number / 1000;
    int secondDigit = (number / 100) % 10;
    int thirdDigit = (number / 10) % 10;
    int fourthDigit = number % 10;

    if (firstDigit == fourthDigit && secondDigit == thirdDigit)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
}