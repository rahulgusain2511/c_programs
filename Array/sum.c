#include<stdio.h>
int main()
{
    int i,sum=0;
    int arr[3];
    printf("eneter elements of array");
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<3;i++)
    {

        sum=sum+arr[i];
    }
    printf("sum = %d",sum);
}