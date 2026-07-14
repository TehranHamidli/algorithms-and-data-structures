#include <iostream>

using namespace std;

int main()
{

    int twoDigit;

    cin >> twoDigit;

    int firstDigit = twoDigit / 10;
    int secondDigit = twoDigit % 10;

    if (firstDigit == 0)
    {
        cout << secondDigit << endl;
    }
    else if (secondDigit == 0)
    {
        cout << firstDigit << endl;
    }
    else
    {
        cout << secondDigit << firstDigit << endl;
    }
}