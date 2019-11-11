#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
                double pi;
    int x;
    char ch;

    cout<<"123456789012345678901234567890123456789"<<endl;
    ifstream inFile;
    inFile.open("values.txt");
    inFile>> pi>>x>>ch;
    cout<< showpoint <<fixed;
	cout<< setprecision(2);
	cout<< pi<<endl;
	cout<< setprecision(3);
	cout<< pi<<endl;
	cout<< setprecision(4);
	cout<< pi<<endl;

	cout<<setw(5)<<x<<setw(5)<<ch<<endl;
	cout<<setw(8)<<x<<ch<<endl;
	cout<< setprecision(4);
	cout<< setw(8)<<pi<<setw(10)<<x<<setw(10)<<ch<<endl;

}
