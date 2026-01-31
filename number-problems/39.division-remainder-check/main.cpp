#include <iostream>

using namespace std;

int main()
{

    int a, b, s, r;

    cin >> a >> b >> s >> r;

    int division = a % b;


    if (division == r || division == s){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}