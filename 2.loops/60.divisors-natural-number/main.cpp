#include <iostream>

using namespace std;

int main()
{

    int N;

    cin >> N;

    for (int divider = 1; divider <= N; divider++)
    {

        if (N % divider == 0)
        {
            cout << divider << " ";
        }
    }
}