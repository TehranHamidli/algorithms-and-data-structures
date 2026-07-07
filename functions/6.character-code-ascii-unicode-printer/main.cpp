#include <iostream>

using namespace std;

char printAsciiValue(char c)
{

    int asciiCharacter = c;

    cout << "The ASCII value of " << c << " is: " << asciiCharacter << endl;

    return asciiCharacter;
}

char printAsciiCharValue(char asciiCharacter)
{

    char asciiCharacterValue = asciiCharacter;

    cout << "The character for the ASCII value " << int(asciiCharacter) << " is: " << asciiCharacterValue << endl;

    return asciiCharacterValue;
}

int main()
{

    char character;

    cin >> character;

    char print = printAsciiValue(character);
    printAsciiCharValue(print);
}