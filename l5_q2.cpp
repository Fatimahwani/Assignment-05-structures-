//raising n to power p,use default arg of 2 if no argument given
#include<iostream>
using namespace std;
double power(double n,int=2 );//mention default arg in declaration

int main()
{
    int p;
    char choice;
    float n;
    cout<<"enter the number "<<endl;
    cin>>n;
    cout<<"do you want to enter the power"<<endl;
    cin>>choice;
    
    if(choice=='y')//both n and p given
    {
        cout<<"enter"<<endl;
        cin>>p;
        cout<<"The answer is "<<power(n,p);
    }
    else//defaut arg is used
    {
        cout<<"The answer is "<<power(n);


    }
   
    return 0;
}

double power(double n,int p)
{
    int i;
    double ans=1;

    for(i=1;i<p+1;i++)
    {
        ans=ans*n;
    }

    return ans;
    
}
