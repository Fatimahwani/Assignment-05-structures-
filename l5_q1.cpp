#include<iostream>
using namespace std;

float circ_area(float rad);
int main()
{
    float rad;
    cout<<"Enter the radius of circle"<<endl;
    cin>>rad;
    cout<<"The area of circle is "<<circ_area(rad)<<endl;
    return 0;
}
//fxn
float circ_area(float rad)
{
    return (3.14159*rad*rad);
}