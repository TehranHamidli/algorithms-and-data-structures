#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    string text;

    getline(cin, text);

    int count = 1;

    for (size_t i = 1; i < text.length(); ++i)
    {

        if (text[i] == text[i - 1])
        {
            count++;
        }
        else
        {
            cout << text[i - 1] << count;
            count = 1;
        }
    }

    cout << text[text.length() - 1] << count << endl;
}