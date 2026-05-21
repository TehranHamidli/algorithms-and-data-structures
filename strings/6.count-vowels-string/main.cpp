#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    string text;

    getline(cin, text);

    string vowels = "aeiou";

    int vowelsCounter = 0;

    for (size_t i = 0; i < text.length(); i++)
    {

        for (size_t j = 0; j < vowels.length(); j++)
        {
            if(text[i] == vowels[j]){
                vowelsCounter++;
            }
        }
    }

    cout << "number of vowels -> " << vowelsCounter;
}