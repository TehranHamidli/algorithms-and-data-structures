#include <iostream>

using namespace std;

int main()
{

    int N;

    cin >> N;

    for (int prime = 3; prime <= N; prime++)
    {
        int primeCounter = 0;
        for (int divisions = 1; divisions <= prime; divisions++)
        {
            if (prime % divisions == 0)
            {
                primeCounter++;
            }
        }

        if (primeCounter == 2)
        {

            int twinNumber = prime + 2;

            int twinCounter = 0;

            for (int twinDivisons = 1; twinDivisons <= twinNumber; twinDivisons++)
            {

                if (twinNumber % twinDivisons == 0)
                {
                    twinCounter++;
                }
            }

            if (twinCounter == 2 && twinNumber < N)
            {
                cout << "(" << prime << ", " << twinNumber << ")" << endl;
            }
        }
    }
}