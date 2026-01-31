#include <iostream>

using namespace std;

int main()
{

    int N;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {

        for (int j = i + 1; j <= N; j++)
        {


            int birinci = i * i;
            int ikinci = j * j;

            if (birinci + ikinci <= N)
            cout << i << "^" << '2' << " + " << j << "^" << "2" << " = " << birinci + ikinci << endl;
        }
    }
}