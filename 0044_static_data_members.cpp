#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setdata()
    {
        cout<<"Enter the id: "<<endl;
        cin>>id;
        count++;
    }

    void getdata()
    {
        cout<<"The id of the employee is "<<id<<" and this is employee number "<<count<<endl;
    }
};

// count is the static data member of class Employee
int employee :: count; // Default value is 0;

int main()
{
    employee sai,bheem,raju,jaggu;

    // sai.id = 1;
    // sai.count = 1; // cannot do this as id and count are private

    sai.setdata();
    sai.getdata();

    bheem.setdata();
    bheem.getdata();

    raju.setdata();
    raju.getdata();

    jaggu.setdata();
    jaggu.getdata();


    return 0;
}