#include<stdio.h>
int main()
{
    int i,j,arr[5],rev,k;
    printf("enter elements of an array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<4;j++)
    {
        rev=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=rev;
        
    }
    for(k=0;k<5;k++)
    {
        printf("%d",arr[k]);
    }

}