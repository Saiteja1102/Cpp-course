#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int , int ); // Constructor declaration

    void printdata(void)
    {
        cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex :: complex(int x, int y) // This is a parametrized constructor as it takes 2 parameters
{
    a = x;
    b = y;
}

int main()
{
    // Implicit call
    complex c1(9,4);
    c1.printdata();

    // Explicit call
    complex c2 = complex(4,5);
    c2.printdata();
    return 0;
}