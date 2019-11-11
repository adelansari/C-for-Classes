#include<iostream>
using namespace std;
int main (void)
{
    int code=0, Qn;
    double x1,tot=0;
    cout<<"Enter the Item Code  &  Quantity: ";
    cin>>code>>Qn;

    while(code!=-1)
    {
       switch(code)
       {
           case 1: x1= Qn*3.9;
               break;
           case 2: x1= Qn*5;
               break;
           case 3: x1= Qn*1.8;
            break;
       }
        tot+= x1;
       cout<<"Enter the Item Code  &  Quantity: ";
       cin>>code>>Qn;
    }

       cout<<"Total cost is "<<tot<<endl;

}
