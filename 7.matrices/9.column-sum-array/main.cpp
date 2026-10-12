#include <iostream>

using namespace std;

int main()
{

    int rows, columns;

    cin >> rows >> columns;

    int matrix[rows][columns];

    for (int r = 0; r < rows; ++r)
    {
        for (int c = 0; c < columns; ++c)
        {
            cin >> matrix[r][c];
        }
    }

    for (int c = 0; c < columns; ++c)
    {

        int sumColumn = 0;

        for (int r = 0; r < rows; ++r)
        {
            sumColumn += matrix[r][c];
        }

        cout <<sumColumn << " ";
    }
}