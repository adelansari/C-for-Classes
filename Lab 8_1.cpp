#include<iostream>
using namespace std;
int main(void)
{
    int chi=0,youn=0,old=0,N, age;
    cout<<"How many persons are there? ";
    cin>>N;
    for (int i=1; i<=N; i++)
    {
        cout<<"Enter an age: ";
        cin>>age;
        if(age<7)
        chi+=1;
        else if(7<=age && age<=90)
        youn+=1;
        else
        old+=1;

    }
    cout<<"There are "<<chi<<" children, "<<youn<<" young, and "<< old<<" old.";

}
