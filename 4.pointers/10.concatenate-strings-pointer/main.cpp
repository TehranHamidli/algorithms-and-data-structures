#include <iostream>

using namespace std;

int main()
{

    char str1[100];
    char str2[100];

    char *s1 = str1;
    char *s2 = str2;

    cin.getline(str1, sizeof(str1));
    cin.getline(str2, sizeof(str2));

    while (*s1 != 0)
    {
        s1++;
    }

    while (*s2 != 0)
    {
        *s1 = *s2;
        s1++;
        s2++;
    }

    *s1 = '\0';

    cout << "Concatenated string: " << str1 << endl;
}