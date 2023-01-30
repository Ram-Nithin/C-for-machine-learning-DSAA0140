#include <iostream>
using namespace std;

 main()
{
   float data[5],i;
   cout << "Enter elements: ";

   for( i = 0; i < 5; ++i)
      cin >> data[i];

   cout << "You entered: ";
   for( i = 0; i < 5; ++i)
      cout << endl << *(data + i);

   return 0;
}