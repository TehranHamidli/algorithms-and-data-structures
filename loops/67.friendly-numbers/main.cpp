#include <iostream>

using namespace std;

int main()
{

    int M, N;

    cin >> M >> N;

    for (int A = M; A <= N; A++)
    {
        int sumA = 0;
        for (int i = 1; i < A; i++)
        {
            if (A % i == 0)
            {
                sumA += i;
            }
        }

        int B = sumA;

        if (B > A && B <= N)
        {
            int sumB = 0;

            for (int j = 1; j < B; j++)
            {
                if (B % j == 0)
                {
                    sumB += j;
                }
            }

            if (sumB == A)
            {
                cout << "(" << A << ", " << B << ")" << endl;
            }
        }
    }
}