#include<stdio.h>
int main()
{
    int i,j,arr1[5],arr2[5],arr3[10],k,u,m=0,t;
    printf("enter elements of first array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter elements of 2nd array");
    for(j=0;j<5;j++)
    {
        scanf("%d",&arr2[j]);
    }
    for ( k= 0; k < 5; k++)
    {
        arr3[k]=arr1[k];
    }
    for(u=5;u<10;u++)
    {
        arr3[u]=arr2[m];
        m++;
    }
    for(i=0;i<10;i++)
    {
        printf("%d",arr3[i]);
    }
    
}