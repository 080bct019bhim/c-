#include<iostream>
using namespace std;
class first{
    int x;
    public:
    first(int a=0):x(a){}
    friend class add;
};
class second{
    int x;
    public:
    second(int b=0):x(b){}
    friend class add;
};
class add{
    public:
    int sum(first f, second s)
    {
        return f.x+s.x;
    }
};

int main()
{
    first f(10);
    second s(20);
    add a;
    cout<<a.sum(f,s);
}