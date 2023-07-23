#include<stdio.h>
int main()
{
    int i,j,arr[5],k,arr1[5],arr2[5],limit,c=0,d=limit-c,arr3[5],l,n;
    printf("enter element of an array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
   printf("enter the limit");
   scanf("%d",&limit);
   for(j=0;j<limit;j++)
   {
       arr1[j]=arr[j];
       c++;
   }
   for(k=0;k<limit-c;k++)
   {
       arr2[k]=arr[d];
       d++;
   }
   for(l=0;l<c;l++)
   {
       arr3[l]=arr2[l];
   }
   for(n=c;n<5;n++)
   {
       arr3[n]=arr1[n];
   }









    for(i=0;i<5;i++)
    {
        printf("%d",arr3[i]);
    }
}