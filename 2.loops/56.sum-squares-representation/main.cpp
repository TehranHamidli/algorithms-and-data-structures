#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {

        for (int j = i + 1; j <= N; j++)
        {

            int sum = (i * i) + (j * j);

            if (sum <= 1000)
            {
                cout << i << "^2 + " << j << "^2 = " << sum << endl;
            }
        }
    }
}