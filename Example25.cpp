#include <iostream>
using namespace std;

int main ()  {
float Kel, Cel;

   cout<< "Input the temperature in Kelvin: ";
     cin>> Kel;
Cel= Kel - 273.15;
   cout<< " The temperature in Kelvin: "<<Kel <<endl;
   cout<< " The temperature in Celsius: "<<Cel <<endl;

return 0;
}
