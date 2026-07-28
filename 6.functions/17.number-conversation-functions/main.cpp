#include <iostream>

using namespace std;

string convertToHex(int num)
{
    if (num == 0) return "0"; 
    string result = "";

    while (num > 0)
    {
        int remainder = num % 16;
        string hexChars = "0123456789ABCDEF";

        result = hexChars[remainder] + result;

        num = num / 16;
    }

    return result;
}

string convertToBinary(int num)
{
    if (num == 0) return "0"; 
    string result = "";

    while (num != 0)
    {
        int remainder = num % 2;
        result = to_string(remainder) + result;
        num = num / 2;
    }

    for (int i = result.length() - 1; i >= 0; i--)
    {
        result[i];
    }

    return result;
}

string convertToOctal(int num)
{

    if (num == 0) return "0"; 
    string result = "";

    while (num > 0)
    {
        int remainder = num % 8;
        result = to_string(remainder) + result;
        num = num / 8;
    }

    return result;
}

int main()
{

    int number;

    cin >> number;
    string binaryResult = convertToBinary(number);
    cout << "Bin: " << binaryResult << endl;
    string hexResult = convertToHex(number);
    cout << "Hex: " << hexResult << endl;

    string octalResult = convertToOctal(number);
    cout << "Oct: " << octalResult << endl;
}