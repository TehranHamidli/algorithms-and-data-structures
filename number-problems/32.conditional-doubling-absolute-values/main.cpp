#include <iostream>

using namespace std;

int main()
{
    float x;
    float y;
    float z;

    cin >> x; // 2.5
    cin >> y; // 4.2
    cin >> z; // 6.8

    if (x < 0)
    {
        x = x * -1;
    }

    if (y < 0)
    {
        y = y * -1;
    }

    if (z < 0)
    {
        z = z * -1;
    }

    if (y <= z && y >= x)
    {
        float x2 = x * 2;
        float y2 = y * 2;
        float z2 = z * 2;

        cout << x2 << " " << y2 << " " << z2 << endl;
    }

    else
    {
        cout << x << " " << y << " " << z << endl;
    }
}