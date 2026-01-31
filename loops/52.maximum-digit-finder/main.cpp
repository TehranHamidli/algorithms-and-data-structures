#include <iostream>

using namespace std;

int main()
{

    int N, bigNumber = 0, tailNumber = 0; 

    cin >> N;

    while (N > 0)
    {

        tailNumber = N % 10;

        if (tailNumber > bigNumber)
        {
            bigNumber = tailNumber;
        }

        N = N / 10;
    }

    cout << bigNumber << endl;
}