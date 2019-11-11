//This program is written by Adel Ali Ansari
//To classify the mobile according to 3 conditions

#include <iostream>
using namespace std;

int main()
{
float a,b,c;
bool cond1,cond2,cond3;

cout<<"Please enter the price of the phone:";  // It gets the price
cin>>a;

cout<<"Please enter the screen size:" ; //it gets the screen size
cin>>b;

cout<<"Please enter the weight of the phone in grams:"; //it gets the weight of the phone
cin>>c;

cond1= a<1500;  //Condition 1: price should be less than 1500 AED.
cond2= b>=4;    //Condition 2: Screen size should be at least 4 inches.
cond3= c<200;   //Condition 3: Weight should be less than 200 gms.

if(cond1&&cond2&&cond3)  // 5 stars if all the conditions above are met
cout<<"5 stars";
else if(cond1&&cond2)    // 4 stars if condition 1 and condition 2 are met only.
cout<<"4 stars";
else if(cond2&&cond3)    // 3 stars if condition 2 and condition 3 are met only.
cout<<"3 stars";
else if(cond1&&cond3)    // 2 stars if condition 1 and condition 3 are met only.
cout<<"2 stars";
else if(cond1||cond2||cond3)  // 1 star if only one condition is satisfied.
cout<<"1 star";
else    // 0 stars if none of the conditions above are met
cout<<"0 stars";


return 0;


}

// End of the program
