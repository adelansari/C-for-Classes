#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    char op;

    cout<<"Please enter two numbers: ";
    cin>>n1>>n2;

    cout<<"Please enter an operation (+,-,* or /): ";
    cin>>op;

    switch (op) {

    case '+': cout<<"n1 + n2 = "<<n1 + n2<<endl;
    break;
    case '-': cout<<"n1 - n2 = "<< n1- n2<<endl;
    break;
    case '*': cout<<"n1 * n2 = "<< n1*n2<<endl;
    break;
    case '/':
    if (n2==0)
    cout<<" n1 / n2 = Math Error";
    else
    cout<< "n1 / n2 = "<< n1/n2<<endl;

    }
}
