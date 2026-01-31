#include <iostream>


using namespace std;


int main () {

    int twoNumber;

    cin >> twoNumber;

    int firstDigit = twoNumber / 10;
    int secondDigit = twoNumber % 10;

    int sum = firstDigit + secondDigit;
    int multiplication = firstDigit * secondDigit;

    cout << "Sum of the digits: " << sum << endl;
    cout << "Product of the digits: " << multiplication << endl;

}