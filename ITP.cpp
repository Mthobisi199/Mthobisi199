#include <iostream>
using namespace std;

int main()
{
    int temp1;
    int temp2;
    int temp3;

    //MAGWINYA MAGIC TEMPERATURE CONTROL

    cout << "Temperature monitor";

    // TEMPERATURE READINGS

    cout << "The first temperature reading: ";
    cin >> temp1;

    cout << "The second temperature reading: ";
    cin >>temp2

    int tempdiff = temp1 - temp2

    // CHECK IF THE SECOND READING IS WITH IN  VALID RANGE

    if (tempdiff > 50 )
    {
        cout <<"reduce fryer heat before taking the third reading";
    }
    else if  (tempdiff > 10)
    {
        cout << "Increase fryer heat before taking the third reading";
    }

   cout << "The third reading (5 minutes later):";

   // CHECK IF OIL TEMPERATURE IS WITHIN ACCEPTABLE RANGE

   if (temp3 >= 150&& temp3<= 190)
   {
       cout << "You may start frying amagwinya";
   }

   else
   {
       cout << "Oil is not ready for frying ! Please adjust heat";
   }
  return 0;
}
