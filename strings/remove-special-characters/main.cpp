#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    string text;

    getline(cin, text);

    for (size_t i = 0; i < text.length(); i++)
    {
        if(isdigit(text[i])){
            cout << text[i];
        };


        if(isalpha(text[i]) || isblank(text[i])){
            cout << text[i];
        }
    }
}