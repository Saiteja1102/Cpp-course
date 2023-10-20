#include <iostream>
using namespace std;

// Forward Declaration
class complex;

class calculate
{
public:
    int add(int a, int b)
    {
        return (a+b);
    }
    int sumofa(complex , complex );
    // int sumofa(complex o1,complex o2)
    // {
    //     return (o1.a + o2.a);
    // }
};

class complex
{
    int a, b;
    friend int calculate :: sumofa(complex , complex );

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void getdata(void)
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

int calculate :: sumofa(complex o1,complex o2)
{
    return (o1.a + o2.a);
}


int main()
{
    complex c1,c2;
    c1.setdata(1, 3);
    c2.setdata(5,6);

    calculate compp;
    int res = compp.sumofa(c1,c2);
    cout<<"The sum of real part is "<<res<<endl;
    return 0;
}