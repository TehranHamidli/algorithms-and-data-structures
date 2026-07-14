#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    string oneString;
    string twoString;
    bool isCheck = true;

    getline(cin, oneString);
    getline(cin, twoString);

    for (size_t i = 0; i < twoString.length(); i++)
    {
        bool found = false;

        for (size_t j = 0; j < oneString.length(); j++)
        {
            if (twoString[i] == oneString[j])
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            isCheck = false;
            break;
        }
    }

    if (isCheck)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}