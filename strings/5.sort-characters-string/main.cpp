#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    string text;
    getline(cin, text);

    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    for (size_t i = 0; i < alphabet.length(); i++)
    {

     for(size_t j = 0; j < text.length(); j++){
        if(alphabet[i] == text[j]){
            cout << alphabet[i];
        }
     }

    }
}