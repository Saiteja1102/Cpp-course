
// What is pointer? --> Pointer is a data type which holds the address of other data type. 

// & --> (Address of) operator
// * --> (value at) Dereference operator

#include<iostream>
using namespace std;

int main()
{
    int a = 11;
    int* b = &a;

    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The address of a is: "<<b<<endl;

    cout<<"The value at address b is: "<<*b<<endl;

    // pointer to pointer
    cout<<"*****  Pointer to Pointer  *****"<<endl;
    int** c = &b;
    cout<<"The address of b is: "<<&b<<endl;
    cout<<"The address of b is: "<<c<<endl;
    cout<<"The value at address c is: "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is: "<<**c<<endl;
    return 0;
}