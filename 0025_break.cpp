
// Break --> Gets out of the loop

#include<iostream>
using namespace std;

int main()
{
    for(int i=1;i<=10;i++)
    {
        cout<<i<<endl;
        if(i==5)
        {
            break;
        }
    }
    return 0;
}