#include<iostream>
using namespace std;
namespace doctor{
    double salary;
    double newSalary()
    {
        return salary*1.1;
    }
}
namespace engineer{
    double salary;
    double newSalary()
    {
        return salary*1.15;
    }
}
int main()
{
    char ch;
    do
    {
    cout<<"\nPress D if you are Doctor and E if you are engineer : ";
    cin>>ch;
    }while(!(ch=='E'||ch=='D'));
    cout<<"Enter your old salary : "; 
    (ch=='E')?cin>>engineer::salary:cin>>doctor::salary;
    cout<<"\nYour new salary : ";
    cout<<((ch=='E')?engineer::newSalary():doctor::newSalary());
    return 0;
}