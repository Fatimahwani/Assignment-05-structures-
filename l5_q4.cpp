
#include<iostream>
using namespace std;

struct Distance
{
    int feet;
    float inches;

};

Distance display_larger(Distance,Distance);

int main()
{
    Distance d1,d2,ans;
    cout<<"enter the feets and inches respectively"<<endl;
    cin>>d1.feet>>d1.inches;

    cout<<"enter the feets and inches respectively"<<endl;
    cin>>d2.feet>>d2.inches;

    ans=display_larger(d1,d2);

    cout<<"The larger distance is "<<ans.feet<<" feet  "<<ans.inches<<" inches"<<endl;

    return 0;

}    

    Distance display_larger(Distance d1,Distance d2)
    {
        float a,b;
       a=d1.inches+d1.feet*12;
       b=d2.inches+d2.feet*12;

       if(a>b)
       {
           return d1;
       }

       else if(b>a) 
       {
           return d2;
       }

       
    }
    
   