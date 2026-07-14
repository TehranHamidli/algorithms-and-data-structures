#include <iostream>

using namespace std;

int main()
{

    int num1;
    int num2;

    int *ptr1;
    int *ptr2;

    cin >> num1 >> num2;

    ptr1 = &num1;
    ptr2 = &num2;

    cout <<"Sum of " << *ptr1 << " and " << *ptr2 << " is: " << *ptr1 + *ptr2 << endl;
   



}