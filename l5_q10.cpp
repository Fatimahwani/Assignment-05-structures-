/*Write a function that, when you call it, displays a message telling how many times it has
been called: “I have been called 3 times”, for instance. Write a main() program that calls
this function at least 10 times. Try implementing this function in two different ways.
First, use a global variable to store the count. Second, use a local static variable. Which
is more appropriate? Why can’t you use a local variable?*/
#include<iostream>
using namespace std;

void fxn(int num);
int main()
{
    int num,i;
    cout<<"Enter the no of times you want to call the fxn "<<endl;
    cin>>num;
    fxn(num);
    
    return 0;
}

void fxn(int num)
{
    static int counter;
    int i;
    for(i=1;i<num+1;i++)
    {
        counter++;
    }

    cout<<"I have been called "<<counter<<" times"<<endl;
}