#include<stdio.h>
int main()
{
    int num1,i,j,rev,n,c=0;
    printf("enter a number ");
    scanf("%d",&num1);
    while(num1>0)
    {
        n=num1%10;
        rev= rev*10+n;
        num1=num1/10;

    }
    printf("%d",rev);
    for(i=2;i<num1;i++)
    {
        if(num1%i==0&&rev%i==0)
        {
            c++;
        }
    }
    if(c==1)
    {
        printf("coprime");

    }
    else
    {
        printf("not coprime");
    }
    

}