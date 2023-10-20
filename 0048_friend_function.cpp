#include <iostream>
using namespace std;

class complex
{
    int a, b;
    friend complex sumof(complex o1, complex o2);

public:
    void setdata(int s1, int s2)
    {
        a = s1;
        b = s2;
    }
    void getdata(void)
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

complex sumof(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setdata(1, 4);
    c1.getdata();

    c2.setdata(5, 6);
    c2.getdata();

    sum = sumof(c1, c2);
    sum.getdata();
    return 0;
}


/*

Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of class, it cannot be called from the object
    of that class. c1.sumof()----> Invalid
3. Can be invoked without the help of any object
4. Usually contains the objects as arguments
5. Can be declared inside public and private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to 
    access any member. 

*/