#include <iostream>

using namespace std;

int main()
{

    int size;

    cin >> size;

    int array[size];

    for (int s = 0; s < size; ++s)
    {
        cin >> array[s];
    }

    
    int firstNumber;
    int secondNumber;


    cin >> firstNumber >> secondNumber;

    firstNumber--;
    secondNumber--;
    

    cout << firstNumber << secondNumber << endl;

    while (firstNumber < secondNumber)
    {

        int save = array[firstNumber];

        array[firstNumber] = array[secondNumber];

        array[secondNumber] = save;

        firstNumber++;
        secondNumber--;
    }

    for (int i = 0; i < size; ++i)
    {
        cout << array[i] << " ";
    }
}