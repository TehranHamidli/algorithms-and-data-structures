#include <iostream>

using namespace std;

int main()
{
    float x;
    float y;

    cin >> x;
    cin >> y;

    if (x > y)
    {
        float x2 = x * 2;
        y = (y + x) / 2;

        cout << x2 << " " << y << endl;
    }
    else if (y > x)
    {
        float y2 = y * 2;
        x = (y + x) / 2;
        cout << x << " " << y2 << endl;
    }
}