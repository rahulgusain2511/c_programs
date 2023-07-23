#include<stdio.h>
int main()
{
    int i,limit,sum=0,a=0,b=1;
    printf("enter a limit");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        printf("%d",sum);
    }

}

