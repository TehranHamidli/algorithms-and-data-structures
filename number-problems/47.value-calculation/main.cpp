#include <iostream>


using namespace std;

int main()
{
    int x = 3, y = 4, z = 2;
    int p = 1;
    
    p *= x; // 3
    p *= y; // 12
    p -= x + y + z; // 12 - 9 = 3
    
    cout << "Value of p is: " << p;
}