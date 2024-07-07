#include<iostream>
using namespace std;
double& great(double& x, double& y)
{
    return x>=y?x:y;
}
int main()
{
    double num1,num2;
    cout<<"Enter two numbers:\n";
    cin>>num1>>num2;
    great(num1,num2)=500;
    cout<<endl<<num1<<endl<<num2;
    
    return 0;
}
