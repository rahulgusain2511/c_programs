#include<stdio.h>
int main()
{
    int i,j,arr[5],max,l,k;
    printf("enter elements os a array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<5;j++)
    {
        for(k=0;k<5;k++)
        {
            if(arr[j]<arr[k])
            {
                max=arr[j];
                arr[j]=arr[k];
                arr[k]=max;
            }
        }
    }
    printf("%d",arr[3]);
}