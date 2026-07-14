#include <iostream>

using namespace std;

float oneMiles = 1.609344;

void milesConv(float k)
{

    float conv = k / oneMiles;
    cout << conv << " Miles/hr";
}

int main()
{

    float k;
    cin >> k;

    milesConv(k);
}