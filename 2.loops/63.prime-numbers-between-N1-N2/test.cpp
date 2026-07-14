#include <iostream>

using namespace std;

int main()
{

    int N1, N2, prime = 0;
    cin >> N1 >> N2;

    for (int i = N1; i <= N2; i++)
    {

        int count = 0;

        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
                prime = i;
            }
        }
        if (count == 2)
        {
            cout << prime << " ";
        }
    }
}