#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int matrix[n][n];

    for (int i = 0; i < n; ++i)
    {

        for (int j = 0; j < n; ++j)
        {

            cin >> matrix[i][j];
        }
    }

    int mainDiagonalSum = 0;
    int antiDiagonalSum = 0;

    for (int i = 0; i < n; ++i)
    {

        mainDiagonalSum = mainDiagonalSum + matrix[i][i];
    }


    for (int i = 0; i < n; ++i)
    {
        int j = n - 1 - i;

        antiDiagonalSum = antiDiagonalSum + matrix[i][j];
    }

    cout << mainDiagonalSum << " " << antiDiagonalSum;
}