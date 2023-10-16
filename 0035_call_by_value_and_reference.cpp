#include<iostream>
using namespace std;

// call by value
int sum(int a,int b)
{
    int c = a + b;
    return c;
}

void swap(int a, int b) // temp a  b
{
    int temp = a;       //  4   4  5
    a = b;              //  4   5  5
    b = temp;           //  4   5  4
}

// Call by reference using pointers
void swappointer(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference using reference variables 
void swapreference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}



int main()
{
    int num1,num2;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    // call by value
    cout<<"The sum is "<<sum(num1,num2)<<endl;
    cout<<endl;
    cout<<"The value of num1 is "<<num1<<" and the value of num2 is "<<num2<<endl;
    // swap(num1,num2); // This will not swap a and b
    // swappointer(&num1,&num2); // This will swap a and b using pointers
    swapreference(num1,num2); // This will swap a and b using reference variables 
    cout<<"The value of num1 is "<<num1<<" and the value of num2 is "<<num2<<endl;
    return 0;
}