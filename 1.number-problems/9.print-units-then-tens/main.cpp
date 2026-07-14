#include <iostream>

using namespace std;

int main()
{

    int threeDigit; 

    cin >> threeDigit;

    int lastDigit = threeDigit % 10;          
    int middleDigit = (threeDigit / 10) % 10;

    cout << "Last digit (units): " << lastDigit << endl;
    cout << "Middle digit (tens): " << middleDigit << endl;
}