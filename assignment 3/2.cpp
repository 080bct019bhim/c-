
#include <iostream>
using namespace std;
class student{
    char name[20],address[20],roll[20];
    double marks;
    public:
    void setData()
    {
        cout<<endl<<"Enter name : ";
        cin>>name;
        cout<<endl<<"Enter address : ";
        cin>>address;
        cout<<endl<<"Enter roll : ";
        cin>>roll;
        cout<<endl<<"Enter marks : ";
        cin>>marks;
    }
    void  showData()
    {
        cout<<endl<<"Name : "<<name<<",    address : "<<address<<",    roll : "<<roll<<",    marks : "<<marks<<endl;
    }
};
int main() {
    int n;
    cout<<"Enter How many numbers:";
    cin>>n;
    cout<<endl<<endl;
    student s[n];
    for(int i=0; i<n; i++)
    {   
        cout<<endl<<endl<<"For student no "<<i+1;
        s[i].setData();
    }
    cout<<endl<<endl;
    for(int i=0; i<n;  i++)
    {
        cout<<endl<<"Details of student no "<<i+1;
        s[i].showData();
    }

}

