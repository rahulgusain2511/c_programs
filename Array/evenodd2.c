#include<stdio.h>
int main()
{
    int i,j,arr[5],c,d;
    printf("enter elements of an array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<5;j++)
    {
        if(arr[j]%2==0)
        {
            c++;
        }
        else
        {
            d++;
        }
        
    }
printf("total even number are=%d",c);
printf("total odd number are=%d",d);

    
    
}