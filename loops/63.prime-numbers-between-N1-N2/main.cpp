#include <iostream>

using namespace std;

int main()
{

    int N1, N2, counter = 0;

    cin >> N1 >> N2;

    for (int i = N1; i <= N2; i++)
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
            cout << i << " ";
        }
    }
}