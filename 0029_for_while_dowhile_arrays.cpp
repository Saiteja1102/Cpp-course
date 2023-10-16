#include<iostream>
using namespace std;

int main()
{
    int marks[] = {92,94,96,91};
    // For loop
    cout<<"Print arrays using for loop"<<endl;
    for(int i = 0;i<4;i++)
    {
        cout<<"The value of marks["<<i<<"] is "<<marks[i]<<endl;
    }
    cout<<endl;
    cout<<endl;

    // while loop
    int j = 0;
    cout<<"Printing arrays using while loop"<<endl;
    while(j<4)
    {
        cout<<"The value of marks["<<j<<"] is "<<marks[j]<<endl;
        j++;
    }
    cout<<endl;
    cout<<endl;

    // do-while loop
    int k = 0;
    cout<<"Printing arrays using do-while loop"<<endl;
    do
    {
        cout<<"The value of marks["<<k<<"] is "<<marks[k]<<endl;
        k++;
    }while(k<4);
    cout<<endl;
    cout<<endl;  
    return 0;
}