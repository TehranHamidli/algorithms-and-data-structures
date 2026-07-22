#include <iostream>

using namespace std;

void sumFunction(int n1, int n2, int n3,int n4)
{
    int sum = n1 + n2 + n3 + n4;

    cout << sum;
}

int main()
{
    int n1, n2, n3, n4;

    cin >> n1 >> n2 >> n3 >> n4;

    sumFunction(n1, n2, n3, n4);
}