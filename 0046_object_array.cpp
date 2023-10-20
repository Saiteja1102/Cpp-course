#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 122;
        cout<<"Enter the id of employee: ";
        cin>>id;
    }

    void getid(void)
    {
        cout<<"The id of employee is "<<id<<endl;
    }
};

int
main()
{
    // employee sai,bheem;
    // sai.setid();            // Normally we use for many members it we be diffult so we make array
    // sai.getid();

    employee comp[10];
    for(int i=0;i<10;i++)
    {
        comp[i].setid();
        comp[i].getid();
    }
    return 0;
}