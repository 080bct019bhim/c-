/*
Write a program in CPP to overload unary -- for postfix and prefix decrement operations for
Task#1 using non-member/friend function ( implementation as c1-- and c2= --c1).
*/
#include<iostream>
using namespace std;
class time{
        int hour,minute,second;
    public:
        time(int h=0, int m=0, int s=0):hour(h),minute(m),second(s){ manageTime();   }

        void setData(int h, int m, int s)
        {
            hour=h;
            minute=m;
            second=s;
            manageTime();
        }

        void showData()
        {
            manageTime();
            cout<<endl<<hour<<":"<<minute<<":"<<second<<endl;
        }

        void manageTime()
        {
            if(second<0 && minute !=0)
            {
                second=59;
                minute--;
            }
            if(second<0 && minute ==0)
            {
                second=59;
                minute=59;
                hour--;
                if(hour<0){
                    hour=23;
                    minute=59;
                    second=59;
                }
            }
            while(second>=60){ second-=60; minute++; }
            while(minute>=60){  minute-=60; hour++;  }
            while(hour>=24)  {        hour-=24;      }
        }

        friend time operator--(time&,int);
        friend time operator--(time&);
        
};
time operator--(time &t,int)
        {
            time temp=t;
            t.second--;
            t.manageTime();
            return temp;
        }

time operator--(time &t)
        {
            t.second--;
            t.manageTime();
            return t;
        }
int main()
{   int hr,min,sec;
    cout<<"Enter hour:minute:second for time t1"<<endl;
    cin>>hr>>min>>sec;
    time t1(hr,min,sec),t2,t3;
    t2=t1--;
    t3=--t1;
    cout<<endl<<"After the operation:     t2=t1--; t3=--t1;"<<endl;
    cout<<endl<<"t1     ";
    t1.showData();
    cout<<endl;
    cout<<"t2     ";
    t2.showData();
    cout<<endl;
    cout<<"t3     ";
    t3.showData();
    return 0;
}