#include <iostream>

using namespace std;

int main()
{

    float x;
    float y;

    cin >> x;
    cin >> y;

    if (x <= y)
    {
        cout << (x = 0) << " " << y << endl;
    }
    else
    {
        cout << x << " " << y << endl;
    }
}