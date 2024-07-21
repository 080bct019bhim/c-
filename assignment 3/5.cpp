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
        void sum(time &t1,time &t2)
        {
            hour=t1.hour+t2.hour;
            minute=t1.minute+t2.minute;
            second=t1.second+t2.second;
            manageTime();
        }
};
int main()
{
    time t1(1,55,6),t2, t3;
    t2.setTime(4,3,90);
    t3.sum(t1,t2);
    t3.showTime();
    return 0;
}

