#include <iostream>

using namespace std;

int main()
{

    int threeDigit; 

    cin >> threeDigit;

    int firstDigit = threeDigit / 100;
    int secondDigit = (threeDigit / 10) % 10;
    int thirdDigit = threeDigit % 10;

    int sum = firstDigit + secondDigit + thirdDigit;
    int multiplication = firstDigit * secondDigit * thirdDigit;

    cout << "Sum of the digits: " << sum << endl;
    cout << "Product of the digits: " << multiplication << endl;

}