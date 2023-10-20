#include <iostream>
using namespace std;

// Forward declaration
class complex;

class calculate
{
public:
    int sumofrealpart(complex ,complex);
    int sumofcomplexpart(complex, complex);
};

class complex
{
    int a, b;
    // Declaring individually
    // friend int calculate :: sumofcomplexpart(complex ,complex );
    // friend int calculate :: sumofrealpart(complex ,complex );

    // Declaring the whole class as friend
    friend class calculate;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
};

int calculate :: sumofcomplexpart(complex o1,complex o2)
{
    return (o1.b + o2.b);
}

int calculate :: sumofrealpart(complex o1,complex o2)
{
    return (o1.a + o2.a);
}

int main()
{
    complex c1,c2;
    c1.setdata(1,2);
    c2.setdata(7,9);

    calculate comp;
    int res = comp.sumofrealpart(c1,c2);
    cout<<"The sum of real part is "<<res<<endl;
    int resc = comp.sumofcomplexpart(c1,c2);
    cout<<"The sum of complex part is "<<resc<<endl;
    return 0;
}