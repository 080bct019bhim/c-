#include<iostream>
using namespace std;
class time{
        int hour,minute,second;
        void manageTime()
        {
            while(second>=60){second-=60; minute++;}
            while(minute>=60){minute-=60; hour++;}
            while(hour>=24){hour-=24;}
        }
    public:
        time(int h=0, int m=0, int s=0):hour(h),minute(m),second(s){}
        void setTime(int h, int m, int s)
        {
            hour=h;
            minute=m;
            second=s;
        }
        void showTime()
        {   manageTime();
            cout<<endl<<hour<<" : "<<minute<<" : "<<second;
        }
        time sum(time &t)
        {

            hour+=t.hour;
            minute+=t.minute;
            second+=t.second;
            manageTime();
            return *this;
        }
};
int main()
{
    time t1(1,55,6),t2, t3;
    t2.setTime(4,3,90);
    t3=t1.sum(t2);
    t3.showTime();
    return 0;
}
