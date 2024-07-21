#include<iostream>
using namespace std;
class second;
class first{
    int x;
    public:
    first(int a=0):x(a){}
    friend int add(first, second);
};
class second{
    int x;
    public:
    second(int b=0):x(b){}
    friend int add(first, second);
};
int add(first c, second d)
{
    return c.x+d.x;
}
int main()
{
    first f(4);
    second s(6);
    cout<<add(f,s);
    return 0;
}