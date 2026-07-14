#include <iostream>

using namespace std;

int main()
{

    int N, bigNumber = 0;

    cin >> N; // 567891

    while (N > 0)
    {

        int tailNumber = N % 10;

        if (tailNumber > bigNumber)
        {
            bigNumber = tailNumber;
        }

        N = N / 10;
    }

    cout << bigNumber << endl;
}