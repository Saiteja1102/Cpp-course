
// Create a function (Hint: Make it a friend function) which takes 2 point objects and computes
// the distance between those 2 points

#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int n1, n2;
    friend void distance(Point ,Point );

public:
    Point(int a, int b)
    {
        n1 = a;
        n2 = b;
    }

    void printPoint(void)
    {
        cout << "The point is (" << n1 << "," << n2 << ")" << endl;
    }
};

void distance(Point p1, Point p2)
{
    int a1 = pow(((p2.n1)-(p1.n1)),2);
    int a2 = pow(((p2.n2)-(p1.n2)),2);
    float squart = sqrt(a1+a2);
    cout<<"The distance between 2 points is "<<squart<<endl;
}

int main()
{
    Point p1(2,1);
    Point p2(4,5);
    distance(p1,p2);
    return 0;
}