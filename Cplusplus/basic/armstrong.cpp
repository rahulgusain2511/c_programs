#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number";
    cin>>num;
    int sum=0,rev;
    int num1=num;
    while(num>0)
    {
        rev=num%10;
        sum=sum+(rev*rev*rev);
        num=num /10;
    }
    if(sum==num1)
    {
        cout<<"armstrong number";
    }
    else
    {
        cout<<"not a armstrong";
    }
    



}