#include<iostream>
using namespace std;
class temp{
    int x;
    public:
    temp(int a=0):x(a)
    {
        cout<<endl<<x<<" : object created."<<endl;
    }
    ~temp()
    {
        cout<<endl<<x<<" : object out of scope";
    }
};
int main()
{
    temp t1(2),t2(4),t3(6);
    return 0;
}