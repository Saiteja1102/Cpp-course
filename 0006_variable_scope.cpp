// Scope - The region in code where the existence of variable is valid.
// Types: 
// ---> Local variable , has more precedence
// ---> Global Variable

#include<iostream>
using namespace std;

int glo = 11;

void sum()
{
    cout<<"The value of global glo is "<<glo<<endl;
}

int  main()
{
    int glo = 8;
    cout<<"The value of local glo is "<<glo<<endl;
    glo = 15;
    cout<<"The value of updated local glo is "<<glo<<endl;
    sum();
    return 0;
}