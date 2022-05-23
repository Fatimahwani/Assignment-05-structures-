//call by reference
#include<iostream>
using namespace std;
void zero_smaller(int&,int&);//the & after type tells that argument will be taken 
                             //by reference


int main()
{
    int int1,int2;
    cout<<"Enter two integers"<<endl;
    cin>>int1>>int2;
    

    zero_smaller(int1,int2);//we dont write & here
    cout<<"int 1="<<int1<<endl<<"int2="<<int2<<endl;
    
    return 0;
}


void zero_smaller(int& i1,int& i2)//to take argument by reference datatype& name 
                                                  //of variable 
{
    if(i1>i2)
    {
        i2=0;
    }

    else if(i2>i1)
    {
        i1=0;
    }
}