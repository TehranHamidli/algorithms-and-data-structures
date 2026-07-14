#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;

    bool isFound = false ;
    
    
    if (a >= 1 && a <= 3)
    {
        cout << a << " ";
        isFound = true;
    }
    if (b >= 1 && b <= 3)
    {
        cout << b << " ";
        isFound = true;
    }
    if (c >= 1 && c <= 3)
    {
        cout << c << " ";
        isFound = true;
    }

    else
    {

        if (isFound == false)
        {
            cout << "No Numbers Found" << endl;
        }
    }
}