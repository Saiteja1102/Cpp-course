#include<iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

    public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};

void shop :: setPrice()
{
    cout<<"Enter the Id of item "<<counter+1<<": ";
    cin>>itemId[counter];
    cout<<"Enter the price of item "<<counter+1<<": ";
    cin>>itemPrice[counter];
    counter++;
}

void shop :: displayPrice()
{
    for(int i=0;i<counter;i++)
    {
        cout<<"The price of item "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}


int main()
{
    shop shop1;
    shop1.initcounter();
    shop1.setPrice();
    shop1.setPrice();
    shop1.setPrice();
    shop1.setPrice();
    shop1.displayPrice();
    return 0;
}