/*
Write a program in CPP for Task#3 using the concept of the overloading binary + operator
using non-member/friend function.
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
        friend measurement operator+(measurement,measurement);        
};
measurement operator+(measurement m,measurement n)
        {
            return measurement(m.feet+n.feet,m.inches+n.inches);
        }
int main()
{
    int feet;
    double inches;
    cout<<"Enter measurement in feet and inches : "<<endl;
    cin>>feet>>inches;
    measurement m1(feet,inches);
    cout<<"Again Enter measurement in feet and inches : "<<endl;
    cin>>feet>>inches;
    measurement m2(feet,inches),m3;
    m3=m1+m2;
    cout<<endl<<"The Sum is : "<<endl;
    m3.showData();
    return 0;
}