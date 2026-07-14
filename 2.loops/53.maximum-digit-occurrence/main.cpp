#include <iostream>

using namespace std;

int main()
{
    int N, tailNumber = 0, count = 0, bigNumber = 0;

    cin >> N;

    while (N > 0)
    {

        tailNumber = N % 10;

        if (tailNumber > bigNumber )
        {
            bigNumber = tailNumber;
            count = 0;
        }
        if(tailNumber == bigNumber){
            count++;
        }

   
        
        N = N / 10;
    }
    cout << "count: " << count << endl;
}