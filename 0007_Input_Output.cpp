// Input stream --> Direction of flow of bytes takes place from input device to the main memory
// Output stream --> Direction of flow of bytes takes place from main memory to the output device

/*

<< insertion operator
>> extraction operator

*/

#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter the value of num1: ";
    cin>>num1;

    cout<<"Enter the value of num2: ";
    cin>>num2;

    cout<<"The sum is "<<num1+num2<<endl;
    return 0;
}