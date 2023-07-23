#include<stdio.h>
int main()
{
    int i,j,arr1[5],arr2[5],k;
    printf("enter elements of an array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
        arr2[i]=arr1[i];
    }
    
    for(k=0;k<5;k++)
    {
        printf("%d",arr2[k]);
    }
}