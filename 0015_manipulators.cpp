// Manipulators: 
// 1. endl
// 2. setw -- mentioned in iomanip header file

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a = 7,b = 37,c = 437,d = 1437;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;
    cout<<"The value of d is "<<d<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"the value of a with setw is "<<setw(4)<<a<<endl;
    cout<<"the value of b with setw is "<<setw(4)<<b<<endl;
    cout<<"the value of c with setw is "<<setw(4)<<c<<endl;
    cout<<"the value of d with setw is "<<setw(4)<<d<<endl;
}