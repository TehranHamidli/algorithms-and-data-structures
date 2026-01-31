#include <iostream>

using namespace std;

int main()
{

    int N, primeNumber = 0;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {

        if (N % i == 0)
        {
            primeNumber++;
        }
    }

    if (primeNumber == 2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}