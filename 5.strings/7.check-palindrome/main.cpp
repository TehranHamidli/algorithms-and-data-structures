#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    string text;

    getline(cin, text);

    string reverseText = "";

    for (int i = text.length() - 1; i >= 0; i--)
    {

        reverseText += text[i];
    }

    if (text == reverseText)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}