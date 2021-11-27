#include <iostream>
using namespace std;

int main ()  {
float Ang1, Ang2, Ang3;

  cout<<"Input the 1st angle of triangle: ";
     cin>> Ang1;
  cout<<"Input the 2nd angle of triangle: ";
     cin>> Ang2;
Ang3= 180-(Ang1+Ang2);
  cout<<" The third angle of the triangle is: "<< Ang3 <<endl;

  return 0;
}
