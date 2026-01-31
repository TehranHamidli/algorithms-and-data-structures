#include <iostream>

using namespace std;

int main()
{

    int N;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {

        int number = i;
        bool print = true;

        while (number > 0)
        {

            int tail = number % 10;
            if (tail == 0)
            {
                print = false;
                break;
            }
            else
            {
                if (i % tail != 0)
                {
                    print = false;
                    break;
                }
            }
            number /= 10;
        }

        if (print == true)
        {
            cout << i << ' ';
        }
    }

    cout << endl;
}


// ikinci versiya


// #include <iostream>
// using namespace std;

// int main()
// {
//     int N;
//     cin >> N;

//     for (int i = 1; i <= N; i++)
//     {

//         int j;
//         for ( j = i; j > 0; j /= 10)
//         {
//             int tailNumber = j % 10;

//             if (tailNumber == 0 || i % tailNumber != 0){
//                 break;
//             }
//         }

//         if (j == 0) cout << i << " ";
//     }
// }
