#include <iostream>
#include <cstring>
using namespace std;

string toLower(string s)
{
    for (size_t i = 0; i < s.length(); ++i)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}

void anagramChecker(string t1, string t2)
{

    t1 = toLower(t1);
    t2 = toLower(t2);

    string sorted1 = "";
    string sorted2 = "";

    for (char t = 'a'; t <= 'z'; ++t)
    {
        for (size_t i = 0; i < t1.length(); ++i)
        {
            if (t == t1[i])
            {
                sorted1 += t;
            }
        }

        for (size_t i = 0; i < t2.length(); ++i)
        {
            if (t == t2[i])
            {
                sorted2 += t;
            }
        }
    }

    if (sorted1 == sorted2)
    {
        cout << "Anagram" << endl;
    }
    else
    {
        cout << "Not Anagram" << endl;
    }
}

int main()
{

    string textOne, textTwo;

    getline(cin, textOne);
    getline(cin, textTwo);

    anagramChecker(textOne, textTwo);
}