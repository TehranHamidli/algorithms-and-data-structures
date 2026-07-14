#include <iostream>

using namespace std;

int main()
{

    int N, counter = 1, twinCounter = 0;

    cin >> N;

    for (int i = 3; i < N; i++)
    {
        counter = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                counter++;
            }
        }
        if (counter == 2)
        {
            int twin = i + 2;

            twinCounter = 0;

            for (int k = 1; k <= twin; k++)
            {
                if (twin % k == 0)
                {
                    twinCounter++;
                }
            }

            if (twinCounter == 2 && twin < N)
            {
                cout << "(" << i << ", " << twin << ")" << endl;
            }
        }
    }
}