#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string lower = "abcdefghijklmnopqrstuvwxyz";
    string text;

    getline(cin, text);

    for (size_t i = 0; i < text.length(); ++i)
    {

        for (size_t j = 0; j < upper.length(); ++j)
        {

            if (text[i] == upper[j] && isupper(text[i]))
            {

                cout << upper[(j + 1) % 26];
            }
        }
        for (size_t j = 0; j < lower.length(); ++j)
        {

            if (text[i] == lower[j] && islower(text[i]))
            {

                cout << lower[(j + 1) % 26];
            }
        }

        if (!isalpha(text[i]))
        {
            cout << text[i];
        }
    }
}