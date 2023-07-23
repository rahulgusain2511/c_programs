#include<stdio.h>
int main()
{
    int a[5];
    int i,j,sum=0;
    printf("enter elemests of an array");
    for(j=0;j<5;j++)
    {
        scanf("%d",&a[j]);

    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}