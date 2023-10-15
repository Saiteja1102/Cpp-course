#include<iostream>
using namespace std;

int main()
{
    cout<<"***** float, double, long double LITERALS *****"<<endl;
    cout<<endl;
    float num = 34.45F;
    long double lb = 34.45L;
    cout<<"The size of num is "<<sizeof(num)<<endl;
    cout<<"The size of lb is "<<sizeof(lb)<<endl;
    cout<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<endl;
}