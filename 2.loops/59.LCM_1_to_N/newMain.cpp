#include <iostream>

using namespace std;

int main()
{

    int N, result = 1;

    cin >> N;

    while (true)
    {
        int bolunur = true;
        for (int i = 1; i <= N; i++)
        {
            if (result % i != 0)
            {
                bolunur = false;
                break;
            }
        }

        if (bolunur == true)
        {
            cout << result << endl;
            break;
        }

        result++;
    }
}