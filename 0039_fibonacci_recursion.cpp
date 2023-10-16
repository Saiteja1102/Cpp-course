#include<iostream>
using namespace std;

int fib(int n)
{
    if(n<2)
    {
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"The fibonnaci sequence at position "<<num<<" is "<<fib(num)<<endl;
    return 0;
}