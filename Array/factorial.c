#include<stdio.h>
int main()
{
    int num,i,f=1;
    printf("enter a number ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        f=f*i;
    }
    printf("%d",f);
}