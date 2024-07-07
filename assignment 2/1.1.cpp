#include<iostream>
using namespace std;
void swapNum(int& x, int& y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main()
{
    int num1,num2;
    cout<<"Enter two numbers:\n";
    cin>>num1>>num2;
    cout<<"Before: "<<num1<<" and "<<num2<<endl;
    swapNum(num1,num2);
    cout<<"Swapped numbers: "<<num1<<" and "<<num2;
    return 0;
}