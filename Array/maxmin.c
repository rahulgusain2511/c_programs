#include<stdio.h>

int main()
{
    int arr[4],max=0,min=0,i,j;
    printf("enter elements of array");
    for(i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(arr[i]>arr[j])
            {
                max=arr[i];
            }
            
            
        }
    }
    
        printf("%d%d",max,min);
}


