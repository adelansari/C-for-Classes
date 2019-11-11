#include<iostream>
using namespace std;
int main()
{
int month;
    cout<<"Please, enter the number of a month: ";
cin>>month;
    switch (month)
    {



    case 2 : case 3 : case 4 : case 5:
    cout<<"This is a Fall semester";
    break;

    case 7: case 8:
    cout<<"This is Summer";
    break;

    case 9: case 10 : case 11: case 12:
    cout<<"This is Spring semester";
    break;

    case 1 : case 6:
    cout<<"This is an exam month";
    break;

    default:
    cout<<"Please, enter a correct number (1 - 12)";

    }

    return 0;
}
