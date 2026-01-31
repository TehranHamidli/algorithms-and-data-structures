#include <iostream>

using namespace std;

int main()
{

    int N, power = 0;

    cin >> N;

    for (int i = 2; i <= N; i++)
    {
        power = 0;
        while (N % i == 0)
        {
            power++;
            N /= i;
        }

        if (power > 0)
        {
            cout << i << "^" << power << " ";
        }
    }
}