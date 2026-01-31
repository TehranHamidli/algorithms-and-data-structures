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
                sumA = sumA + i;
            }
        }

        int B = sumA;

        int sumB = 0;

        for (int j = 1; j < B; j++)
        {
            if (B % j == 0)
            {
                sumB = sumB + j;
            }
        }

     if (A == sumB && A < B ){
        cout << "(" << A << ", " << B << ")" << endl;
     }
    }



}