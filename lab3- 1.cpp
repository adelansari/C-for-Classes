#include<iostream>
using namespace std;
int main ()
{
 float cm,feet;
 int x1, x2;
 cout<<"Enter your height in cm: ";
 cin>> cm;
 feet= cm/30.48;
 x1= feet;
 x2= (feet- x1)*12;
 cout<<"The approximate height in feet and inches is: "<<x1<<" ft & "<<x2<<"\""<<endl;
 return 0;

}
