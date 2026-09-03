#include <iostream>

using namespace std;

int main()
{

    int m, n;

    cin >> m >> n;

    int matrix[m][n];

    for (int i = 0; i < m; ++i)
    {

        for (int j = 0; j < n; ++j)
        {

            cin >> matrix[i][j];
        }
    }

    int unikal[m * n];

    int count = 0;

    for (int i = 0; i < m; ++i)
    {

        for (int j = 0; j < n; ++j)
        {

            bool isRepetiton = false;

            for (int u = 0; u < count; u++)
            {
                if (unikal[u] == matrix[i][j])
                {
                    isRepetiton = true;
                    break;
                }
            }

            if (!isRepetiton)
            {
                unikal[count] = matrix[i][j];
                count++;
            }
        }
    }
    cout << count;
}