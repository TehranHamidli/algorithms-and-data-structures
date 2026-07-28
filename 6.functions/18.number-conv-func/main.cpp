#include <iostream>

using namespace std;

string convertToHex(int num, string format)
{
    string result = "";
    if (format == "hex")
    {
        if (num == 0)
            return "0";

        while (num > 0)
        {
            int remainder = num % 16;
            string hexChars = "0123456789ABCDEF";

            result = hexChars[remainder] + result;

            num = num / 16;
        }
    }

    return result;
}

string convertToBinary(int num, string format)
{
    string result = "";

    if (format == "bin")
    {
        if (num == 0)
            return "0";

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
    };

    return result;
}

string convertToOctal(int num, string format)
{
    string result = "";
    if (format == "oct")
    {
        if (num == 0)
            return "0";

        while (num > 0)
        {
            int remainder = num % 8;
            result = to_string(remainder) + result;
            num = num / 8;
        }
    }

    return result;
}

int main()
{

    int number;
    string format;

    cin >> number;

    cin.ignore();

    getline(cin, format);

    string binaryResult = convertToBinary(number, format);
    string hexResult = convertToHex(number, format);
    string octalResult = convertToOctal(number, format);

    if (binaryResult != "")
    {
        cout << binaryResult << endl;
    }

    if (hexResult != "")
    {
        cout << hexResult << endl;
    }

    if (octalResult != "")
    {
        cout << octalResult << endl;
    }
}