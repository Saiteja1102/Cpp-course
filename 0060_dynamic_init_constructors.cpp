#include<iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float rate;
    float returnValue;

    public:
    BankDeposit(){}
    BankDeposit(int p,int y,float r);
    BankDeposit(int p,int y,float R);
    void show(void)
    {
        cout<<"The "<<principal<<" Rupees we have deposited for "<<years<<" will be converted into "<<returnValue<<endl;
    }
};

BankDeposit :: BankDeposit(int p,int y,float r)
{
    principal = p;
    years = y;
    rate = r;
    returnValue = principal + (principal * years * rate);
}

BankDeposit :: BankDeposit(int P,int Y,float R)
{
    principal = P;
    years = Y;
    rate = R/100;
    returnValue = principal + (principal * years * rate);
}

int main()
{
    BankDeposit bd1,bd2;
    int p,y;
    float r,R;

    cout<<"Enter p,y and r: "<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p,y,r);
    bd1.show();

    cout<<"Enter p,y and R in percent: "<<endl; 
    cin>>p>>y>>R;
    bd2 = BankDeposit(p,y,R);
    bd2.show();
    return 0;
}