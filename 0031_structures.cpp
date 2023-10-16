
// structure --> user defined data type(can store different data types)

#include<iostream>
using namespace std;

struct student
{
    int reg_no;
    char name;
    float roll_no;
};

typedef struct employee
{
    int eid;
    char favchar;
    float salary;
} ep;

int main()
{
    struct student sai;
    sai.reg_no = 12219303;
    sai.name = 's';
    sai.roll_no =  11.00;
    cout<<"The value of "<<sai.reg_no<<endl;
    cout<<"The value of "<<sai.name<<endl;
    cout<<"The value of "<<sai.roll_no<<endl;
    cout<<endl;

    cout<<"Employee using typedef....."<<endl;
    ep haswanth;
    haswanth.eid = 121;
    haswanth.favchar = 'h';
    haswanth.salary = 99999999;
    cout<<"The value of "<<haswanth.eid<<endl;
    cout<<"The value of "<<haswanth.favchar<<endl;
    cout<<"The value of "<<haswanth.salary<<endl;
    return 0;
}