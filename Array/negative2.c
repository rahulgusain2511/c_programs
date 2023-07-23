#include<stdio.h>
int main()
{
    int i,j,arr[5],c;
    printf("enter alements of an array");
        for(i=0;i<5;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(j=0;j<5;j++)
        {
            if(arr[j]<0)
            {
                c++;
            }
        }
printf("total number of negative numbers are =%d",c);
}
