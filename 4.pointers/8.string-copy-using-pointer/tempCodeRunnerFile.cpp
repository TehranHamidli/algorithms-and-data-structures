#include <iostream>

using namespace std;

int main()
{

    char source[100];
    char destination[100];

    char *ptrSource;
    char *ptrDestination;

    cin.getline(source, sizeof(source));



    ptrSource = source;
    ptrDestination = destination;



    while(*ptrSource){
        *ptrDestination = *ptrSource;
        ptrSource++;
        ptrDestination++;
    }  




    cout << "Copied string: " << destination << endl;

    
} 