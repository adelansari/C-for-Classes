//this program is written by Adel
//This program shows how much profit you made or loss you incurred

#include <iostream>
using namespace std;
int main()
{
    int CO, SE; //Co is Cost price and SE is sell price
    // I defind CO and SE as integer

    cout<< "Please enter the cost price :"; //The program shows the entry
    cin>>CO; // here I ask to enter the cost price
    cout << "Please enter the sell price :";  //The program shows the entry
    cin>>SE; //here I ask for sell price
    if (CO<SE) //I use if statement to show whether it's profit or loss
    {
        cout<<"Congratulation! You made a profit of: "<<SE-CO<<"AED"<<endl; // it shows profit
    }
    else
        cout<<"You incurred loss of: "<<CO-SE<<"AED"<<endl; //it shows loss


    return 0;
}

//The end of the program
