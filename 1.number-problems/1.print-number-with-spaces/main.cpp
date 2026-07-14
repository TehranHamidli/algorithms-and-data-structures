#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int number;

    cin >> number;
    int c = number % 10;

    int b = (number / 10) % 10;

    int a = number / 100;

    cout << a << " " << b << " " << c << endl;
}