/*
Write a program in CPP to compare two time objects by overloading binary > and != operator.
(Assume as 14:35:00 > 10:45:00)
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
            cout<<hour<<":"<<minute<<":"<<second<<endl;
        }

        void manageTime()
        {
            while(second>=60){ second-=60; minute++; }
            while(minute>=60){  minute-=60; hour++;  }
            while(hour>=24){    hour-=24;   }
        }

       bool operator>(time &t)
       {
        if(hour>t.hour)
            return 1;
        else if(hour==t.hour && minute>t.minute)
            return 1;
        else if(hour==t.hour &&  minute==t.minute && second>t.second)
            return 1;
        return 0;
       }
       bool operator!=(time &t)
       {
        if(hour==t.hour && minute==t.minute && second==t.second)
            return 0;
        return 1;
       }
};
int main()
{   int hr,min,sec;
    cout<<"Enter hour:minute:second for time t1"<<endl;
    cin>>hr>>min>>sec;
    time t1(hr,min,sec);
    cout<<"Enter hour:minute:second for time t2"<<endl;
    cin>>hr>>min>>sec;
    time t2(hr,min,sec);

    if(t1>t2)
        cout<<endl<<"t1 Greater than t2"<<endl;
    else
        cout<<endl<<"t1 Not Greater than t2"<<endl;
    
    if(t1!=t2)
        cout<<endl<<"t1 Not Equals to t2";
    else
        cout<<endl<<"t1 Equals to t2";   
    return 0;
}