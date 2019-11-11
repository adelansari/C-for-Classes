#include<iostream>
using namespace std;
main()
{
    int coc,box,con,x1,x2;
    cout<<"Enter the number of cookies";
    cin>>coc;
    cout<<"Enter the number of cookies in a box";
    cin>>box;
    cout<<"the number of cookie boxes in a container";
    cin>>con;

    x1= coc/24;
    x2=x1/con;

    cout<<"The number of boxes to ship the cookie are: "<<x1<<endl;
    cout<<"The number of containers to ship the cookies are: "<<x2<<endl;
}
