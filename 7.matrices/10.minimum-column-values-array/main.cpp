#include <iostream>

using namespace std;

int main()
{
    int rows, columns;
    cin >> rows >> columns;

    int matrix[rows][columns];

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    for (int j = 0; j < columns; ++j)
    {
        int minValue = matrix[0][j];

        for (int i = 0; i < rows; ++i)
        {
            if (matrix[i][j] < minValue)
            {
                minValue = matrix[i][j];
            }
        }

        cout << minValue << " ";
    }
}