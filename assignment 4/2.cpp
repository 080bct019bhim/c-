#include<iostream>
using namespace std;
class temp{
    int x;
    public:
    temp()
    {
        cout<<endl<<"This is constructor:"<<endl<<"Enter the value for x : ";
        cin>>x;
    }
    
    void increaseAndShow()
    {
        x++;
        cout<<endl<<x;
    }
    void show() const
    {
        cout<<endl<<x;
    }
};
int main()
{
    const temp t1;
    t1.show();
    temp t2;
    t2.increaseAndShow();
    return 0;
}