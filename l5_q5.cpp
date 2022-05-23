#include<iostream>

using namespace std;

long hms_to_sec(int,int,int);


int main()
{
    char dummychar;
    char ch='y';//to run any no of times
    int hr,min,second;
    long sec;

    while(ch=='y')
    {
        cout<<"Enter the time in (HH:MM:SS) format"<<endl;
        cin>>hr>>dummychar>>min>>dummychar>>sec;//dummy char for hh:mm::ss format
        second= hms_to_sec(hr,min,sec);//fxn call
        cout<<"The time in sec is "<<second<<endl;
        cout<<"Do you want to continue(y/n)"<<endl;//choice
        cin>>ch;
    }

    return 0;
}

long hms_to_sec(int hr,int min,int sec)//converts time to sec
{
    long second=hr*3600+min*60+sec;
    return second;
}

