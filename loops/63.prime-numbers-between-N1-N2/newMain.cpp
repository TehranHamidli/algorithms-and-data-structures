#include <iostream>

using namespace std;

int main()
{

    int N1, N2, primeNumber = 0;

    cin >> N1 >> N2;

    for (int i = N1; i <= N2; i++){
        primeNumber = 0;
        for (int j = 1; j <= i; j++){
            if (i % j == 0){
             primeNumber++;

            }
        }

        if (primeNumber == 2){
            cout << i << " ";
        }
    }
}