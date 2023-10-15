
//  :: --> scope resolution operator - it give sthe value of global variable 


#include<iostream>
using namespace std;

int sum = 45;

int main()
{
    int num1,num2;
    cout<<"Enter the value of num1: "<<endl;
    cin>>num1;
    cout<<"Enter the value of num2: "<<endl;
    cin>>num2;

    int sum = num1+num2;

    cout<<"the sum is "<<sum<<endl;
    cout<<"The global sum is "<<::sum<<endl;
}