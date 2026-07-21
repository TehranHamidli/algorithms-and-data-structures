#include <iostream>
using namespace std;

void perfectNumber(int start, int end)
{
    cout << "The perfect numbers between 1 to " << end << " are: ";

    for (int i = start; i <= end; ++i)
    {
        int sum = 0;
        for (int j = 1; j < i; ++j)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }

        if (sum == i)
        {
            cout << i << " ";
        }
    }

    cout << endl;
}

int main()
{
    int start, end;
    cin >> start >> end;
    perfectNumber(start, end);
}