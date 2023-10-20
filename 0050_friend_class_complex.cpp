#include <iostream>
using namespace std;

// Forward declaration
class complex;

class calculate
{
public:
    int sumofcomplexpart(complex, complex);
};

class complex
{
    int a, b;
    friend int calculate :: sumofcomplexpart(complex ,complex );

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

int main()
{
    complex c1,c2;
    c1.setdata(1,2);
    c2.setdata(7,9);

    calculate comp;
    int resc = comp.sumofcomplexpart(c1,c2);
    cout<<"The sum of complex part is "<<resc<<endl;
    return 0;
}