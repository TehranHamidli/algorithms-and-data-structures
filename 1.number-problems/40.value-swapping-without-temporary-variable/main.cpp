#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    a = a + b; // 5 + 7 = 12
    b = a - b; // 12 - 7 = 5
    a = a - b; // 12 - 5 = 7

    cout << a << " " << b << endl;
}