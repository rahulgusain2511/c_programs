#include<stdio.h>
int main()
{
    int a[5];
    int b[5],i,j,k,sum=0,l;
    printf("enter elements of first array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter elements bof array 2");
    for(j=0;j<5;j++)
    {
        scanf("%d",&b[j]);
    }
    for(k=0;k<5;k++)
    {
        sum=sum+a[k]+b[k];
    }
    printf("sum of both array is %d",sum);
}