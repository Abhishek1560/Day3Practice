#include <iostream>
using namespace std;

int main ()  {
float frh, cel;
  cout<<"Input the temperature in Fahreheit: ";
    cin>> frh;
cel= ((frh *5.0)-(5.0 * 32))/9;
   cout<<"The temperature in Fahrenheit: "<< frh <<"\n";
   cout<<"The temperature in celsius: "<< cel <<"\n";
return 0;
}
