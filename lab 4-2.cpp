#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
string fn1, fn2, fn3;
double salary1,bonus1,salary2,bonus2,salary3,bonus3;
double average;
    ifstream inFile;
    ofstream outFile;


    inFile.open("employees.txt");
    outFile.open("salary.out");
    outFile<<"123456789012345678901234567890123456789"<<endl;

    outFile << fixed << showpoint;
    outFile << setprecision(2);

    inFile >> fn1>>salary1>>bonus1;
        outFile<< setw(10)<< fn1<<setw(10)<<salary1+bonus1<<endl;
        inFile >> fn2>>salary2>>bonus2;
        outFile<< setw(10)<< fn2<<setw(10)<<salary2+bonus2<<endl;
        inFile >> fn3>>salary3>>bonus3;
        outFile<< setw(10)<< fn3<<setw(10)<<salary3+bonus3<<endl;
        average= (salary1+bonus1+salary2+bonus2+salary3+bonus3)/3;
        outFile << "Total average pay: " << average << endl;
            inFile.close();
            outFile.close();
            return 0;
}
