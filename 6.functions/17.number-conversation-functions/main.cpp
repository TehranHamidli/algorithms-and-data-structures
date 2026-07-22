#include <iostream>

using namespace std;

string convertToHex(int num)
{

    for (int i = 0; i <= num; ++i)
    {
        int remainder = num % 16;

        cout << remainder;

      
    }

    return to_string(remainder);
}

int main()
{

    int number;

    cin >> number;

    convertToHex(number);
    // string convertToBinary(int number);
    // string convertToOctal(int number);
}