#include <iostream>
using namespace std;

int main ()  {
float Kel, Frh;

  cout<< "Input the temperature in Kelvin: ";
   cin>> Kel;
Frh= (9.0 /5) * (Kel - 273.15) + 32;
  cout<< " The temperature in Kelvin: "<<Kel <<"\n";
  cout<< " The temperature in Fahrenheit: "<<Frh <<"\n";

return 0;
}
