/*
Write a program in CPP to convert the distance in feet and inch entered by the user into distance
in meters using the concept of user defined to basic data conversion.
*/
#include<iostream>
using namespace std;
class Distance{
        int feet;
        double inches;
    public:
        Distance(int f=0, double i=0):feet(f),inches(i){      }
        operator double()
        {
            return (feet+inches/12)/3.28;
        }
};
int main()
{
    int feet;
    double inches;
    cout<<"Enter distance in feet and inches"<<endl;
    cin>>feet>>inches;
    Distance d(feet,inches);
    double meter = d; // it is like double meter = d.operator double ();
    cout<<endl<<meter<<" meters ."<<endl;
    return 0;
}
