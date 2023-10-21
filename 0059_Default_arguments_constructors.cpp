#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2, data3;

public:
    simple(int x, int y = 9, int z = 5)
    {
        data1 = x;
        data2 = y;
        data3 = z;
    }

    void printdata(void);
};

void simple :: printdata(void)
{
    cout<<"The values of data1,data2 and data3 is "<<data1<<", "<<data2<<" and "<<data3<<endl;
}

int main()
{
    simple s1(9);
    s1.printdata();

    simple s2(8,4);
    s2.printdata();

    simple s3(2,5,6);
    s3.printdata();
    return 0;
}