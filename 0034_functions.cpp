#include<iostream>
using namespace std;

// Function Prototype
// type function-name(arguments);
// int sum(int num1,int num2); // --> Acceptable 
// int sum(int num1,num2); // --> Not acceptable 
int sum(int,int); // Acceptable
void g(void); // Acceptable 
// void g(); // Not acceptable

int main()
{
    int num1,num2;
    cout<<"Enter number 1: "<<endl;;
    cin>>num1;
    cout<<"Enter number 2: "<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"The sum is "<<sum(num1,num2)<<endl;
    g();
    return 0;
}

int sum(int a, int b)
{
    // formal parameters a and b will be taking values from actual paramets num1 and num2
    int c = a+b;
    return c;
}

void g()
{
    cout<<"\nHello, Good Morning,Afternoon,Evening...";
}
