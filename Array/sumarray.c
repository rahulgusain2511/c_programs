#include<stdio.h>
int main()
{
    int arr[5],i,j,sum=0;
    printf("enter elements of an array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<5;j++)
    {
        sum=sum+arr[j];
    }
    printf("%d",sum);

}