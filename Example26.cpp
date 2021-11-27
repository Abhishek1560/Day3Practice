#include <iostream>
using namespace std;

int main ()  {
float Frh, Kel;

    cout<<"Input the temperature in Fahrenheit: ";
       cin>> Frh;
Kel= (5.0 / 9) * (Frh - 32) + 273.15;
    cout<< " The temperature in Fahrenheit: "<<Frh <<endl;
    cout<< " The temperature in Kelvin: "<<Kel <<endl;

return 0;
}
