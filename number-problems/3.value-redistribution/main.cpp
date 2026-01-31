#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y;

    if (x > y)
    {

        z = x;
        x = z;
    }
    else if (y > x)
    {
        z = y;
        y = x;
        x = z;
    }

    cout << x << " " << y << endl;

    return 0;
}
