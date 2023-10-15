#include<iostream>
using namespace std;

int main()
{
    cout<<"Selection Structure....."<<endl;
    int age;
    cout<<"Enter the age: ";
    cin>>age;
    if(age<18)
    {
        cout<<"Your are minor, you can't come to the party!!"<<endl;
    }
    else if(age==18)
    {
        cout<<"You are 18, you are converting.."<<endl;
    }
    else
    {
        cout<<"You are major, you can come to the party"<<endl;
    }
    return 0;
}