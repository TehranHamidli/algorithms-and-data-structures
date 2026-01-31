// #include <iostream>

// using namespace std;

// int main()
// {
//     int N;

//     cin >> N; // 25

//     bool stop = false;

//     for (int i = 1; i <= N; i++)
//     {

//         for (int j = i + 1; j <= N; j++)
//         {

//             if (i * i + j * j == N && !stop == true)
//             {
//                 cout << "YES" << endl;
//                 stop = true;
//             }
//         }
//     }

//     if (!stop)
//     {
//         cout << "NO" << endl;
//     }
// }

// ikinci versiya

// #include <iostream>

// using namespace std;

// int main()
// {

//     int N;
//     cin >> N;

//     bool stop = false;

//     for (int i = 1; i <= N; i++)
//     {

//         for (int j = 1; j <= N; j++)
//         {

//             if (i * i + j * j == N)
//             {

//                 cout << "YES" << endl;
//                 stop = true;
//             }
//         }
//         if (stop)
//             break;
//     }
//     if (!stop)
//     {
//         cout << "NO" << endl;
//     }
// }

// test

#include <iostream>

using namespace std;

int main()
{

    int N;
    cin >> N;

    bool stop = false;

    for (int i = 1; i <= N; i++)
    {

        for (int j = 1; j <= N; j++)
        {
            if (i * i + j * j == N)
            {
                cout << "YES" << endl;
                stop = true;
            }
        }
        if (stop)
            break;

            if(!stop){
                cout << "NO" << endl;
                break;
            }
    }
}