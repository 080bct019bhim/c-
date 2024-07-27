/*
WAP in CPP to convert the co-ordinates from Cartesian system to polar system using the
concept of user defined to user defined conversion by writing conversion routine in source
class.
*/

/*
source class and destination class
 A a;
 B b;
 source class: class from which data is copied
 destination class: class to  which data is copied
  a=b;
  here b is source class
  a is destination class
*/
#include<iostream>
using namespace std;
#include<cmath>
#include<iomanip>
class Polar{
    double r,a;
public:
    Polar(double magnitude=0, double angle = 0):r(magnitude),a(angle){}
    void showData()
    {
        cout<<endl<<r<<" < "<<fixed<<setprecision(2)<<a<<endl;
    }
    void setR(double  mag)
    {
        r=mag;
    }
    void setA(double angle)
    {
        a=angle;
    }
};
class Cartesian{
    double x,y;
public:
    Cartesian(double a=0, double b=0):x(a),y(b)   { }
    void showData()
    {
        cout<<endl<<"( "<<x<<", "<<y<<" )"<<endl;
    }
    operator Polar()
    {
        Polar temp;
        double t=pow((x*x+y*y),0.5);
        double ang=atan(y/x)*180/3.1415;
        ang=abs(ang);
        if(x>0&&y<0)
            ang=-ang;
        else if(x<0&&y>0)
            ang=180-ang;
        else if(x<0 && y<0)
            ang=180+ang;
        temp.setR(t);
        temp.setA(ang);
        return temp;
    }
};

int main()
{
    double x,y;
    cout<<"Enter (x,y)"<<endl;
    cin>>x>>y;
    Cartesian c(x,y);
    Polar p=c; // Polar p = c.operator Polar()  or  Polar p = c ; by calling constructor// c is cource class and p is destination class
    p.showData();
    return 0;
}