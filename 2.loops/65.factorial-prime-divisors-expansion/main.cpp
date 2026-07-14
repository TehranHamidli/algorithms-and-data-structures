#include <iostream>

using namespace std;

int main()
{

    int N, faktorial = 1, power = 0;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {

        faktorial = i * faktorial;
    }

    for (int prime = 2; prime <= faktorial; prime++)
    {
        power = 0;

        while (faktorial % prime == 0)
        {
            power++;
            faktorial = faktorial / prime;
        }

        if (power > 0)
        {
            cout << prime << "^" << power << " ";
        }
    }
}


