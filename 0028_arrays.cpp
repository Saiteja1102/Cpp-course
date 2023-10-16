
// Arrays --> Collection of similar type stored in contiguous memory locations

#include<iostream>
using namespace std;

int main()
{
    int marks[] = {99,95,97,93};

    int mathmarks[4];
    mathmarks[0] = 123;
    mathmarks[1] = 234;
    mathmarks[2] = 342;
    mathmarks[3] = 276;
    
    cout<<endl;
    cout<<"These are math marks: "<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    cout<<endl;

    //You can change the value of array......
    marks[2] = 89;

    cout<<"These are marks: "<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<endl;
    return 0;
}