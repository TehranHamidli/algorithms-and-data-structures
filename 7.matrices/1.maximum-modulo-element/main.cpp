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

    int max = matrix[0][0];
    int max_row = 0;
    int max_col = 0;

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
                max_row = i;
                max_col = j; 
            }
        }
    }

    cout << "Value: " << max << " " << max_row << " " << max_col << endl;
}