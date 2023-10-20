#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // Creating a Constructor
    // Constructor is a special member function with the same number as of the class
    // it is used to initialize the objects of its class
    // it is automatically invoked whenever an object is created.

    complex(void);

    void printdata(void)
    {
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex :: complex(void) // --> This is a default constructor as it accepts no parameters
{
    a = 10;
    b = 20;
}

int
main()
{
    complex c1;
    c1.printdata();
    return 0;
}

/*

Characteristics of Constructors

1. It should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not have return types
4. It can have default arguments
5. We cannot refer to their address

*/