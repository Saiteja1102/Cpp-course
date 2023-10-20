#include <iostream>
using namespace std;

class Y;

class X
{
    int data;
    friend void swap(X & ,Y & );

public:
    void setdata(int v)
    {
        data = v;
    }
    void getdata(void)
    {
        cout<<data<<endl;
    }
};

class Y
{
    int value;
    friend void swap(X & ,Y & );

public:
    void setdata(int x)
    {
        value = x;
    }
    void getdata(void)
    {
        cout<<value<<endl;
    }
};

// Swapping of numbers(data)

void swap(X & a, Y & b)
{
    int temp;
    temp = a.data;
    a.data = b.value;
    b.value = temp;
}

int main()
{
    X a;
    Y b;
    a.setdata(78);
    b.setdata(4);

    swap(a,b);

    // After swaping
    a.getdata();
    b.getdata();
    return 0;
}