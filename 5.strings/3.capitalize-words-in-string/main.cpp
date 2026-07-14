#include <iostream>
using namespace std;

int main()
{
    string text;
    getline(cin, text);

    bool print = true;
    for (size_t i = 0; i < text.length(); i++)
    {

        if (isalpha(text[i]))
        {
            if (print)
            {
                cout << (char)toupper(text[i]);
            }
            else
            {
                cout << (char)tolower(text[i]);
            }
            print = false;
        }
        else
        {
            cout << text[i];
            print = true;
        }
    }
}