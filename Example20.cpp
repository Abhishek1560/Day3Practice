#include <iostream>
using namespace std;

int main ()  {
float frh, cel;
  cout<<"Input the temperature in celsius: ";
    cin>> cel;
frh = (cel * 9)/5 + 32;
   cout<<"The temperature in celsius: "<< cel <<"\n";
   cout<<"The temperature in Fahrenheit: "<< frh <<"\n";
return 0;
}
