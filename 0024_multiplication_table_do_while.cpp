// Multication table using do-while loop

#include<iostream>
using namespace std;

int main()
{
    int num,i=1;
    cout<<"Enter the number: ";
    cin>>num;
    do
    {
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
        i++;
    }while(i<=10);

    return 0;
}