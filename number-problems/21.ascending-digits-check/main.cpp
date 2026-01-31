#include <iostream>

using namespace std;

int main()
{

    int number;

    cin >> number;

    int one = number / 10000;
    int two = (number / 1000) % 10;
    int three = (number / 100) % 10;
    int f0r = (number / 10) % 10;
    int five = number % 10;

    if (one < two && two < three && three < f0r && f0r < five)
    {
        cout << "Ascending" << endl;
    }
    else
    {
        cout << "Not Ascending" << endl;
    }
}