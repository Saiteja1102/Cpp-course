
// unions --> Provides better memory management than structure 

#include<iostream>
using namespace std;

union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    union money m1;
    m1.rice = 123;
    cout<<m1.rice<<endl;
    cout<<"Here it will overwrite.."<<endl;;
    m1.car = 'c';
    cout<<m1.car<<endl;
    cout<<m1.rice<<endl;
    cout<<"Prints garabage value."<<endl;
    return 0;
}