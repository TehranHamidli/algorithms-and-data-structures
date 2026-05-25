#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    string numberStrings;

    getline(cin, numberStrings);

    for (size_t i = 0; i < numberStrings.length(); ++i)
    {

        cout << numberStrings[i];

            if (numberStrings[i] == numberStrings[i + 1])
                continue;

            if (numberStrings[i] % 2 != 0 && numberStrings[i + 1] % 2 != 0)
            {
                cout << "-";
            }
    }
}