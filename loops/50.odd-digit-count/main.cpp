#include <iostream>

using namespace std;

int main()
{

    int n, count = 0;

    cin >> n;

    while (n > 0)
    {

        int tailNumber = n % 10;

        if (tailNumber % 2 != 0)
        { 
            count++;
        }

        n = n / 10;
    }
    cout << count << endl;
}