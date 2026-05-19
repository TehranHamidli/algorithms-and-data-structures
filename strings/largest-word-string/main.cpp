#include <iostream>
using namespace std;

int main()
{

    string text;

    getline(cin, text);

    // C++ da corek yoxdur.

    if (text.empty())
        return 0;

    bool newWord = true;
    int wordCount = 0;

    cout << text << endl;

    for (size_t i = 0; i < text.length(); ++i)
    {

        if (newWord)
        {   
            cout << text[i] << endl;
            wordCount++;
        }
    }
}