#include <iostream>

using namespace std;

int main()
{

    char text[100];

    char *ptr;

    cin.getline(text, sizeof(text));

    ptr = text;

    int length = 0;

    while (*ptr != 0)
    {
        length++;
        ptr++;
        cout << *ptr << endl;
    }

    cout << "Length of the string: " << length << endl;
}