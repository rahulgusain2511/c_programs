#include<stdio.h>
int main()
{
    int arr[5],i,j;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
   for(j=0;j<5;j++)
   {
       if(arr[j]<0)
       {
           printf("%d",arr[j]);
       }
   }
}