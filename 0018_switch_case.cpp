#include<iostream>
using namespace std;

int main()
{
    cout<<"Selection Structure..."<<endl;
    int age;
    cout<<"Enter age: ";
    cin>>age;
    switch(age)
    {
        case 18:
            cout<<"You are 18"<<endl;
            break;
        case 20:
            cout<<"You are 20"<<endl;
            break;
        case 22:
            cout<<"You are 22"<<endl;
            break;
        case 25:
            cout<<"You are 25"<<endl;
            break;
        default:
            cout<<"Give correct case"<<endl;
            break;
    }
    return 0;
}