/*
Write a program in CPP to convert the distance in meters entered by the user into distance in feet
and inch using the concept of basic to user defined data conversion.
*/
/*
    12 inches = 1 feet
    1 meter = 3.28 feet
    1 meter = 3.28*12inches       = 39.16 inches
*/
#include<iostream>
using namespace std;
class Distance{
        int feet;
        double inches;
    public:
        Distance(int f=0, double i=0):feet(f),inches(i){      }

        void  showData()
        {
            cout<<endl<<feet<<" feet and "<<inches<<" inches ."<<endl;
        }

        Distance(double d)
        {
            double  temp=d*39.3701;
            feet=temp/12;
            inches=temp-feet*12;
        }
};
int main()
{
    double meters;
    cout<<"Enter distance in meters :"<<endl;
    cin>>meters;
    Distance d=meters;
    d.showData();
    return 0;
}
