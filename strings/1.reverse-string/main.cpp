#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[20];

    cin.getline(str, 20);

    for (size_t i = 0; i < strlen(str) / 2; i++)
    {

        char temp = str[i];
        str[i] = str[strlen(str) - i - 1];
        str[strlen(str) - i - 1] = temp;
    }

    cout << str << endl;
}