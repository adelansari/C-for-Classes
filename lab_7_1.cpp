#include<iostream>
using namespace std;
int main()
{
    char x1, counter=0;
    while(counter<5)
    {
        cout<<"Enter a character: ";
        cin>>x1;
        if(x1>='A' && x1<='Z')
        cout<< "You have entered an upper case letter"<<endl;
        else if(x1>='a' && x1<='z')
        cout<< "You have entered a lower letter"<<endl;
        else
        cout<<"You have enteed a non-letter character"<<endl;

        counter++;

    }
    return 0;
}
