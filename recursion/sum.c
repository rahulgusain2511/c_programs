#include<stdio.h>
void su(int n)
{
    int m;
    static int sum=0;
    if(n>0)
    {
        m=n%10;
        sum=sum+m;
        su(n/10);
    }
    else
    {
    printf("%d",sum);
        
    }
    
}
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    su(num);
}