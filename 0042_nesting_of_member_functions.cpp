// Nesting of member functions

#include <iostream>
using namespace std;

class binary
{
    string s;
    void check_binary(void);

public:
    void read(void);
    void ones_complement(void);
    void display(void);
};

void binary ::read()
{
    cout << "Enter the binary number: " << endl;
    cin >> s;
}

void binary :: check_binary()
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect binary format.....!!!"<<endl;
            break;
        }
    }
}

void binary :: ones_complement()
{
    check_binary();
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i) = '1'; 
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary :: display()
{
    for(int i = 0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    // b.check_binary(); --> This is private so it cant be called...
    b.ones_complement();
    b.display();
    return 0;
}