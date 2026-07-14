#include <iostream>

using namespace std;

int main()
{
    // D ≤ C ≤ B ≤ A  olarsa her bir ededi onlardan en boyuyu ile evez edin  - bu sert alinir
    // A < B < C < D olarsa reqemler deyismez qoyun
    // Eks halda butun nomreleri onlarin kvadratlari ile evez edin

    float a, b, c, d;

    cin >> a >> b >> c >> d;

    bool isFound = false;

    if (a >= b && b >= c && c >= d)
    {

        b = a;
        c = a;
        d = a;

        cout << a << " " << b << " " << c << " " << d;
        isFound = true;
    }

    if (a < b && b < c && c < d){

        cout << a << " " << b << " " << c << " " << d; 
          isFound = true;
    }

    else {
      if(!isFound){

          a *= a;
        b *= b;
        c *= c;
        d *= d;

        cout << a << " " << b << " " << c << " " << d; 
      }
    }
}