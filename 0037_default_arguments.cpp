#include<iostream>
using namespace std;

// Defaults arguments should always be written in extreme right
float moneyreceived(int currentmoney, float factor=1.04)
{
    return currentmoney * factor;
}

int main()
{
    int balance;
    cout<<"Enter your bank balance: ";
    cin>>balance;
    cout<<"If you have "<<balance<<" Rs in bank account, you will receive "<<moneyreceived(balance)<<"Rs after 1 year!!"<<endl;
    cout<<"For VIP: If you have "<<balance<<" Rs in bank account, you will receive "<<moneyreceived(balance,1.10)<<"Rs after 1 year!!"<<endl;
    return 0;
}