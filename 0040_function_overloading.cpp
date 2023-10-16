#include<iostream>
using namespace std;

int sum(int a,int b)
{
    return (a+b);
}

int sum(int a,int b,int c)
{
    return (a+b+c);
}

//Calculate the volume of cylinder
float volume(int r,int h)
{
    return (3.14*r*r*h);
}

// Calculate the volume of cube
int volume(int a)
{
    return (a*a*a);
}

// Calculate the volume of cuboid
int volume(int a, int b, int c)
{
    return (a*b*c);
}


int main()
{
    cout<<"The sum of 3 and 4 is "<<sum(3,4)<<endl;
    cout<<"The sum of 3, 4 and 5 is "<<sum(3,4,5)<<endl;
    cout<<"The volume of cylinder of radius 3 and height 4 is "<<volume(3,4)<<endl;
    cout<<"The volume of cube of side 5 is "<<volume(5)<<endl;
    cout<<"The volume of cuboid of length 4, breadth 5 and heigth 3 is "<<volume(4,5,3)<<endl;
    
    return 0;
}