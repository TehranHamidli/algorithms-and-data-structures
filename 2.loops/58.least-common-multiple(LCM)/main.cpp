#include <iostream>

using namespace std;

int main()
{

    int A, B, LCM;

    cin >> A >> B;

    for (int i = min(A, B); i >= 1; i--)
    {

        if (A % i == 0 && B % i == 0)
        {
            LCM = (A * B) / i;

            cout << LCM << endl;

            break;
        }
    }
}