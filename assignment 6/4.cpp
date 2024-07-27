/*
WAP in CPP to convert the co-ordinates from Cartesian system to polar system using the
concept of user defined to user defined conversion by writing conversion routine in
destination class.
*/
#include<iostream>
using namespace std;
#include<cmath>
#include<iomanip>
class Cartesian{
    double x,y;
public:
    Cartesian(double a=0, double b=0):x(a),y(b)   { }
    void showData()
    {
        cout<<endl<<"( "<<x<<", "<<y<<" )"<<endl;
    }
    double getX()
    {
        return x;
    }
    double getY()
    {
        return y;
    }
};
class Polar{
    double r,a;
public:
    Polar(double magnitude=0, double angle = 0):r(magnitude),a(angle){}
    void showData()
    {
        cout<<endl<<r<<" < "<<fixed<<setprecision(2)<<a<<endl;
    }
    Polar(Cartesian c)
    {
        double x=c.getX(),y=c.getY();
        r=pow((x*x+y*y),0.5);
        a=atan(y/x)*180/3.1415;
        a=abs(a);
        if(x>0&&y<0)
            a=-a;
        else if(x<0&&y>0)
            a=180-a;
        else if(x<0 && y<0)
            a=180+a;
    }
};


int main()
{
    double x,y;
    cout<<"Enter (x,y)"<<endl;
    cin>>x>>y;
    Cartesian c(x,y);
    Polar p=c; // constructor will be called for  p i.e. p(c); // c is cource class and p is destination class
    p.showData();
    return 0;
}