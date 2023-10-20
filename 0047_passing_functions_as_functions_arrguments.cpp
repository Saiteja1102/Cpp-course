#include <iostream>
using namespace std;

class complex
{
    int a,b;
public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void sumofcomplex(complex o1,complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }  // this one run by itself without specifying

    void printsum(void)
    {
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.setdata(2,3);
    c1.printsum();

    c1.setdata(5,8);
    c1.printsum();

    c1.setdata(12,32);
    c1.printsum();

    return 0;
}