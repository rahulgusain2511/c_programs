#include<stdio.h>
int main()
{
    int num,i,a=0,b=1,sum;
    printf("enter a limit");
    scanf("%d",&num);

    for(i=0;i<=num;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        printf("%d",sum);

    }
}