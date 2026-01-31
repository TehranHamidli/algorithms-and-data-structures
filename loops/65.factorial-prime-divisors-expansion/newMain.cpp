#include <iostream>

using namespace std;

int main()
{

    int N, factorial = 1;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        factorial = i * factorial;
    }

    for (int j = 2; j <= factorial; j++)

    {
        int power = 0;
        while (factorial % j == 0)
        {
            power++;
            factorial /= j;
        }

        if (power > 0)
        {
            cout << j << "^" << power << " ";
        }
    }
}