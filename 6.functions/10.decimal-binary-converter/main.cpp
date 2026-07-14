#include <iostream>

using namespace std;

void decimalBinaryConverter(int decimal)
{
    string result = "";

    while (decimal != 0)
    {
        int qaliq = decimal % 2;
        result += to_string(qaliq);
        decimal = decimal / 2;
    }

    for (int i = result.length() - 1; i >= 0; i--)
    {
        cout << result[i];
    }
}
int main()
{

    int number;

    cin >> number;

    decimalBinaryConverter(number);
}