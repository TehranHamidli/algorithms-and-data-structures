#include <iostream>


using namespace std;


int main () {
     int  twoDigit;
    
    cin >> twoDigit;
    
    int rightDigit = twoDigit % 10;
    int leftDigit = twoDigit / 10;
    
    cout << "Left digit: " << leftDigit << endl;
    cout << "Right digit: " << rightDigit << endl;
}