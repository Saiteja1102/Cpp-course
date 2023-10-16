
// Recursion --> Function calling itself

#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*factorial(n-1);
}

// factorial(6) = 6 * factorial(5);
// factorial(6) = 6 * 5 * factorial(4);
// factorial(6) = 6 * 5 * 4 * factorial(3);
// factorial(6) = 6 * 5 * 4 * 3 * factorial(2);
// factorial(6) = 6 * 5 * 4 * 3 * 2 * factorial(1);
// factorial(6) = 6 * 5 * 4 * 3 * 2 * 1;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"The factorial of "<<num<<" is "<<factorial(num)<<endl;
    return 0;
}