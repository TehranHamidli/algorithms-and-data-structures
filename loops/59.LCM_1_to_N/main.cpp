#include <iostream>

using namespace std;

int main()
{

    int N, result = 1, LCMSave;

    cin >> N;

    for (int divisible = 1; divisible <= N; divisible++)

    {
        LCMSave = result;

        while (result % divisible)
        {
            result += LCMSave;
        }
    }

    cout << result << endl;
}
