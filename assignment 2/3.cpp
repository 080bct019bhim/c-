#include<iostream>
using namespace std;
double& great(double& x, double& y)
{
    return x>=y?x:y;
}
int main()
{
    double num1,num2,temp;
    cout<<"Enter two numbers:\n";
    cin>>num1>>num2;
    temp=great(num1,num2);
    cout<<"Greatest value "<<temp<<" is updated to : "; 
    temp=500;
    cout<<temp;
    return 0;
}