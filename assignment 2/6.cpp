#include<iostream>
using namespace std;
class Distance{
    float feet, inches;
    public:
    void setFeet(int x)
    {
        feet=x;
    }
    void setInches(int y)
    {
        inches=y;
    }
    
    void feetToMeters()
    {
        cout<<endl<<feet<<" feet : "<<0.3048*feet<<" meters "<<endl;
    }
    void inchesToMeters()
    {
        cout<<endl<<inches<<" inches : "<<0.0254*inches<<" meters "<<endl;
    }
};
int main()
{
    float temp1,temp2;
    Distance d1,d2;
    cout<<"For first object Enter distance in feet and inches : \n";
    cin>>temp1>>temp2;
    d1.setFeet(temp1);
    d1.setInches(temp2);
    d1.feetToMeters();
    d1.inchesToMeters();
    cout<<endl<<endl<<"For second object Enter distance in feet and inches : \n";
    cin>>temp1>>temp2;
    d2.setInches(temp2);
    d2.setFeet(temp1);
    d2.feetToMeters();
    d2.inchesToMeters();
    
    return 0;
}