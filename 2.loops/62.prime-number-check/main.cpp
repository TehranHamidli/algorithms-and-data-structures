#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;
    int counter = 0;

    for (int i = 1; i <= N / 2; i++)
    {
        

        if (N % i == 0)
            counter++;
    }

    if (counter > 2)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
}