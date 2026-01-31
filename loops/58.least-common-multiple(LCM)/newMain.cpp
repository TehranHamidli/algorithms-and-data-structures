#include <iostream>

using namespace std;

int main()
{

    int A, B, EKOB = 0;

    cin >> A >> B;

    for (int i = 1; i <= min(A,B); i++)
    {
      int bolunen = A * i;

        if (bolunen % A == 0 && bolunen % B == 0){
            
            EKOB = bolunen;
            break;
        }

    }

    cout << EKOB << endl;
}