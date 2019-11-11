#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
int x=0 ;
    cout<<setw(3)<<"X"<<setw(10) <<"X^2"<<setw(9)<<"X^3"<<endl;
    cout<<"========================="<<endl;
    while (x<=20)
    {
    cout<<setw(3)<<x<<setw(2)<<":"<<setw(9)<<x*x<<setw(2)<<":"<<setw(8)<<x*x*x<<endl;
    x++;
    }

    return 0;
}
