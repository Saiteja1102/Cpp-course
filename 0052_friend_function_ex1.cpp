#include <iostream>
using namespace std;

class Y;

class X
{
    int data;
    friend void sum(X , Y);

public:
    void setdata(int v)
    {
        data = v;
    }
};

class Y
{
    int value;
    friend void sum(X , Y);

public:
    void setdata(int x)
    {
        value = x;
    }
};

void sum(X a,Y b)
{
    cout<<"Summing data of X and Y objects gives me "<<a.data + b.value<<endl;
}

int
main()
{
    X a;
    Y b;
    a.setdata(5);
    b.setdata(7);

    sum(a,b);
    return 0;
}