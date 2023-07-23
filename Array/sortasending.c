#include<stdio.h>
int main()
{
    int i,j,arr[5],asen,k;
    printf("enter\ elements of an array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<5;j++)
    { 
        for(k=j;k<5;k++)
        {
        if(arr[j]>arr[k])
        {
          asen=arr[j];
          arr[j]=arr[k];
          arr[k]=asen;

        }
        }

    }
    for(i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }

}