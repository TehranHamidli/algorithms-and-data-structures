#include <iostream>

using namespace std;

int main()
{

   float x, y;

   cin >> x >> y;

   bool isFound = false;

   if (x < 0 && y < 0)
   {

      x = x * -1;
      y = y * -1;

      isFound = true;
      cout << x << " " << y << endl;
   }
   if (x < 0 || y < 0)
   {
      x = x + 0.5;
      y = y + 0.5;

      isFound = true;
      cout << x << " " << y << endl;
   }
   if (x < 0.5 || x > 2 || y < 0.5 || y > 2)
   {

      if (isFound == false)
      {
         x = x / 10;
         y = y / 10;

         cout << x << " " << y << endl;
      }
   }
}