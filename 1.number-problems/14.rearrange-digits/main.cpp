#include <iostream>

using namespace std;

int main()
{

    int threeDigit;

    cin >> threeDigit;

    int firstDigit = threeDigit / 100;
    int secondDigit = (threeDigit / 10) % 10;
    int thirdDigit = threeDigit % 10;

    cout << secondDigit << firstDigit << thirdDigit << endl;
}