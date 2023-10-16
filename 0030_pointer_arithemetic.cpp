
// address new = address current + i * sizeof(data type)
// example
//             = 32              + 1 * 4(for integer)
//             = 36

#include<iostream>
using namespace std;

int main()
{
    int marks[] = {92,94,96,91};
    int* p = marks;
    
    cout<<"The value at *p is: "<<*p<<endl;
    cout<<"The value at *(p+1) is: "<<*(p+1)<<endl;
    cout<<"The value at *(p+2) is: "<<*(p+2)<<endl;
    cout<<"The value at *(p+3) is: "<<*(p+3)<<endl;
    cout<<endl;

    cout<<"The addres at p is: "<<p<<endl;
    cout<<"The addres at p+1 is: "<<p+1<<endl;
    cout<<"The addres at p+2 is: "<<p+2<<endl;
    cout<<"The addres at p+3 is: "<<p+3<<endl;
    return 0;
}