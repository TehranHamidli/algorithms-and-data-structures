#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    string text;
    getline(cin, text);

    if (text.empty())
        return 0;

    char first = (char)toupper(text[0]);

    cout << first;
    for (size_t i = 1; i < text.length(); ++i)
    {
        if (isblank(text[i]))
        {
            cout << text[i];

            if ((i + 1 < text.length()))
            {
                cout << (char)toupper(text[i + 1]);
                i++;
            }
        }
        else
        {
            cout << text[i];
        }
    }
}