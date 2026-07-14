#include <iostream>
using namespace std;

int main()
{

    string text;

    getline(cin, text);

    string word = "";
    string maxWord = "";

    for (size_t i = 0; i < text.length(); ++i)
    {

        if (text[i] == ' ' || text[i] == '.')
        {

            if ( word.length() > maxWord.length())
            {
                maxWord = word;
            }

            word = ""; 
        }
        else
        {
            word += text[i];
        }
    }

    cout << maxWord ;
}
