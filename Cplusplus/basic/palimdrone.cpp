#include<iostream>
using namespace std;
int main()
{
    int num,rev,num1;
    int sum=0;
    cout<<"enter a number";
    cin>>num;
        num1=num;
    while (num!=0)
    {
        rev=num%10;
        sum=sum*10+rev;
        num=num/10;
    }
    cout<<sum;
    if(sum==num1)
    {

   cout<<"palindrome number";
    }
   else
   {
       cout<<"not a palindone";
   }
   
    

}  