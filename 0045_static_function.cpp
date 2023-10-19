#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setdata()
    {
        cout << "Enter the id: " << endl;
        cin >> id;
        count++;
    }

    void getdata()
    {
        cout << "The id is " << id << " and employee number is " << count << endl;
    }

    static void getcount()
    {
        cout << "The value of count is " << count << endl;
    }
};

int employee :: count;

int main()
{
    employee sai, bheem, raju;

    sai.setdata();
    sai.getdata();
    employee::getcount();

    bheem.setdata();
    bheem.getdata();
    employee::getcount();

    raju.setdata();
    raju.getdata();
    employee::getcount();

    return 0;
}
