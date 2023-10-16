#include<iostream>
using namespace std;

inline int product(int a,int b)
{
    // Not recommended to use below lines with inline functions
    // static int c = 0; // This executes only once
    // c = c + 1; // Next time this function is run, the value of c will be retained
    return a*b;
}

int main()
{
    int num1,num2;
    cout<<"Enter number 1: "<<endl;
    cin>>num1;
    cout<<"Enter number 2: "<<endl;
    cin>>num2;
    cout<<"The product of num1 and num2 is "<<product(num1,num2)<<endl;
    cout<<"The product of num1 and num2 is "<<product(num1,num2)<<endl;
    cout<<"The product of num1 and num2 is "<<product(num1,num2)<<endl;
    cout<<"The product of num1 and num2 is "<<product(num1,num2)<<endl;
    cout<<"The product of num1 and num2 is "<<product(num1,num2)<<endl;
    cout<<"The product of num1 and num2 is "<<product(num1,num2)<<endl;
    cout<<"The product of num1 and num2 is "<<product(num1,num2)<<endl;
    cout<<"The product of num1 and num2 is "<<product(num1,num2)<<endl;
    cout<<"The product of num1 and num2 is "<<product(num1,num2)<<endl;
    cout<<"The product of num1 and num2 is "<<product(num1,num2)<<endl;
    cout<<"The product of num1 and num2 is "<<product(num1,num2)<<endl;
    cout<<"The product of num1 and num2 is "<<product(num1,num2)<<endl;
    cout<<"The product of num1 and num2 is "<<product(num1,num2)<<endl;
    return 0;
}