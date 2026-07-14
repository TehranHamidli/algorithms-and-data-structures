#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string textOne;
    string textTwo;

    getline(cin, textOne);
    getline(cin, textTwo);

    int maxLength = 0;

    string maxWidthWord = "";

    for (size_t i = 0; i < textOne.length(); ++i)
    {

        for (size_t j = 0; j < textTwo.length(); ++j)
        {

            size_t x = i;
            size_t y = j;
            int currentLength = 0;

            while (textOne[x] == textTwo[y])
            {

                x++;
                y++;
                currentLength++;
            }

            if (currentLength > maxLength)
            {
                maxLength = currentLength;

                maxWidthWord = textOne.substr(i, maxLength);
            }
        }
    }

    cout << "Longest Common Substring: " << maxWidthWord << endl;
}