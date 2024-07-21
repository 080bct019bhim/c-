
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
    student s;
    s.setData();
    s.showData();

}

