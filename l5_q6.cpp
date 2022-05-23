#include<iostream>
using namespace std;

struct Time
{
    int hr;
    int min;
    int sec;

};

int time_to_sec(Time t1,Time t2);//takes in Time struct and returns time in sec(int)
Time sec_to_time(int sec1,int sec2);//takes time in sec(int) and returns Time struct 

int main()
{
    Time t1,t2;
    char dummychar;
    int choice,sec1,sec2;
    
    cout<<"Press 1 for HH:MM:SS format and 2 for seconds format"<<endl;
    cout<<"Enter the two quantities"<<endl;
    if(choice==1)
    {
        cin>>t1.hr>>dummychar>>t1.min>>dummychar>>t1.sec;
        cin>>t2.hr>>dummychar>>t2.min>>dummychar>>t2.sec;
        time_to_sec(t1,t2);
    }

    if(choice==2)
    {
        cin>>sec1>>sec2;
        sec_to_time(sec1,sec2);
    }

    return 0;
}

int time_to_sec(Time t1,Time t2)
{
    return t1.hr*3600+t2.hr*3600+t1.min*60+t2.min*60+t1.sec+t2.sec;
}

Time sec_to_time(int sec1,int sec2)
{
    float add_time,temp;
    Time tt;

    add_time=sec1+sec2;
    temp=add_time;
    tt.hr=add_time/3600;
    if(temp%3600==0)
    {
        tt.min=0;
        tt.sec=0;
    }
    else if( ((temp%3600)*60)<60)
    {
        tt.min=(temp%3600)*60


    }



}