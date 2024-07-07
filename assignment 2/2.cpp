#include<iostream>
using namespace std;
float temp;
float& averageNum(const float& x, const float& y, const float& z) //const  ko  matlav  read  only  hunxa  yeama
{
    temp=(x+y+z)/3;
    return temp;
}
int main()
{
    float n1,n2,n3,average;
    cout<<"Enter three numbers:\n";
    cin>>n1>>n2>>n3; 
    average=averageNum(n1,n2,n3);
    cout<<"Avverage : "<<average;
    return 0;
}