#include <iostream>
using namespace std;

int main ()  {
float kmph, mlph;

  cout<<"Input the distance in kilometer: ";
    cin>> kmph;
mlph= (kmph * 0.621); //kilometers per hour to miles per hours
  cout<<"The" <<kmph <<" km/hr" <<" means" << mlph <<" Miles/hr" <<endl;

return 0;
}
