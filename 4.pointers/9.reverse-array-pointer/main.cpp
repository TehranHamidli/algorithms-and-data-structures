#include <iostream>

using namespace std;

int main()
{

   int array[5] = {10, 20, 30, 40, 50};

   int *ptrArray = array;

   int *firstIndex = &ptrArray[0];
   int *endIndex = &ptrArray[4];
   int save;

   for (int i = 0; i < 5; ++i)
   {
      save = *firstIndex;
      *firstIndex = *endIndex;
      *endIndex = save;

      firstIndex++;
      endIndex--;

      if (firstIndex > endIndex)
      {
         break;
      }
   }

   for (int i = 0; i < 5; i++)
   {
      cout << ptrArray[i] << endl;
   }
}