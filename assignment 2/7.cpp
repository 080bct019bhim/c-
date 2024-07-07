#include<iostream>
using namespace std;
class Shape{
    public:
    void areaOfRectangle(double l, double b)
    {
        cout<<endl<<"Area of Rectangle : "<<l*b;
    }
    void areaOfSquare(double l)
    {
        cout<<endl<<"Area of Square : "<<l*l;
    }
    void areaOfCircle(double r)
    {
        cout<<endl<<"Area of Circle : "<<3.1415*r*r;
    }
};
int main()
{
    Shape s1;
    s1.areaOfRectangle(2,3);
    s1.areaOfSquare(5);
    s1.areaOfCircle(10);
    return 0;
}