/*. Start with the power() function of Exercise 2, which works only with type double.
Create a series of overloaded functions with the same name that, in addition to double,
also work with types char, int, long, and float. Write a main() program that exercises
these overloaded functions with all argument types
*/
#include<iostream>
using namespace std;
double power(double n,int=2 );//mention default arg in declaration


int main()
{
    char ch;
    cout<<"press d for double,f for float,l for long,i for int ,c for char"<<endl;
    if(ch='d')
    {
       temp()
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
