#include <iostream>
using namespace std;

int main()
{
    int N, power = 1;
    cin >> N;

   

    while (power <= N)
    {
        if (power == N)
        {
            cout << "Yes" << endl;
            break;
        }

        power *= 2;
    }

    if (power != N)
    {
        cout << "No" << endl;
    }
}
