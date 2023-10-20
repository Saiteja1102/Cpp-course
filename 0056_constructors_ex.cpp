#include <iostream>
using namespace std;

class point
{
    int a, b;

public:
    point(int x,int y)
    {
        a = x;
        b = y;
    }
    void printdata(void)
    {
        cout<<"The point is ("<<a<<","<<b<<")"<<endl;
    }
};

int main()
{
    point p1(1,7);
    point p2(5,6);
    p1.printdata();
    p2.printdata();
    return 0;
}