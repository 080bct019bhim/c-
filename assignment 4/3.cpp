#include<iostream>
using namespace std;
class temp{
    int x;
    static int k;
    public:
    static void increment()
    {
        k++;
    }
    static void decrement()
    {
        k--;
    }
    temp(int a=0):x(a)
    {
        increment();
        cout<<endl<<"object "<<k<<" created."<<endl;
    }
    ~temp()
    {
        cout<<endl<<"object "<<k<<" out of scope";
        decrement();
    }
};
int temp::k=0;
int main()
{
    temp t1,t2,t3,t4,t5;
    return 0;
}