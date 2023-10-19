
/*

OOPS - classes and objects
C++ --> initially called --> c with classes by stroustroup
class --> extension of structures(in c)
structures had limitations
        - members are public
        - no methods
classes --> structures + more
classes --> can have methods and properties
classes --> can make few members as private and few as public

structures in c++ are typedefed
you can declare objects along with class declaration like this:
class student{
    //Class defination
}sai,haswanth,bheem,raju,nobita;

sai.fees = 99567; makes no sense if fees is private

*/


// #include<iostream>
// using namespace std;

// class Student
// {
//     private:
//         int reg_no, fees;
//     public:
//         int roll_no, class_no;
//     void setData(int a, int b);
//     void getData()
//     {
//         cout<<"The roll no is: "<<roll_no<<endl;
//         cout<<"The Class no is: "<<class_no<<endl;
//         cout<<"The registration no is: "<<reg_no<<endl;
//         cout<<"The fees is: "<<fees<<endl;
//     }
// };

// void Student :: setData(int a, int b)
// {
//     reg_no = a;
//     fees = b;
// }

// int main()
// {
//     Student sai;
//     // sai.reg_no = 232; --> This will throw error as reg_no is private
//     sai.roll_no = 11;
//     sai.class_no = 30;
//     sai.setData(1221,80000);
//     sai.getData();
//     return 0;
// }


#include<iostream>
using namespace std;

class bank
{
    private:
        int password;
        float balance;
    public:
        int acc_no,bank_id;
    void setdata(int a, float b);
    void getdata()
    {
        cout<<"The account number is: "<<acc_no<<endl;
        cout<<"The bank_id is: "<<bank_id<<endl;
        cout<<"The password is: "<<password<<endl;
        cout<<"The balance is: "<<balance<<endl;
    }
};

void bank :: setdata(int a, float b)
{
    password = a;
    balance = b;
}
int main()
{
    bank sai;
    // sai.password = 123; --> This give error because its private
    sai.acc_no = 1221;
    sai.bank_id = 11;
    sai.setdata(123,999.99);
    sai.getdata();
    return 0;
}