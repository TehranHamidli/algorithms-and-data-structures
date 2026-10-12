#include <iostream>

using namespace std;

int main()
{
    //  3  4
    int n, m;

    cin >> n >> m;

    int matrix[n][m];

    for (int i = 0; i < n; ++i)
    {

        for (int j = 0; j < m; ++j)
        {

            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; ++i)
    {

        int rowSum = 0;

        for (int j = 0; j < m; ++j)
        {

            rowSum = rowSum + matrix[i][j];
        }

        cout << rowSum << " ";


    }
}