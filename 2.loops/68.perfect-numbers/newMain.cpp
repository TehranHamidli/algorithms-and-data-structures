#include <iostream>

using namespace std;

int main()
{

    int N, sum = 0;
    cin >> N;

    for (int i = 2; i < N; i++)
    {

        sum = 0;

        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }

        if (sum == i)
        {
            cout << i << " ";
        }
    }
}