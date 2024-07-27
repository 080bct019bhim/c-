/*
Write a program in CPP to find the sum of two objects of class “measurement” with data
members - feet and inch, using the concept of the overloading binary + operator using member
function.
*/
#include<iostream>
using namespace std;
class measurement{
        int feet;
        double inches;
    public:
        measurement(int f=0,double i=0):feet(f),inches(i){}
        void setData(int f, double i)
        {
            feet=f;
            inches=i;
        }
        void manageData()
        {
            while(inches>=12)
            {
                inches-=12;
                feet++;
            }
        }
        void showData()
        {
            manageData();
            cout<<feet<<" feet "<<inches<<" inches. "<<endl;
        }
        measurement operator+(measurement m)
        {
            return measurement(feet+m.feet,inches+m.inches);
        }
};
int main()
{
    int feet;
    double inches;
    cout<<"Enter measurement in feet and inches : "<<endl;
    cin>>feet>>inches;
    measurement m1(feet,inches);
    cout<<"Again Enter measurement in feet and inches : "<<endl;
    cin>>feet>>inches;
    measurement m2(feet,inches),m3=m1+m2;
    
    cout<<endl<<"The Sum is : "<<endl;
    m3.showData();
    return 0;
}