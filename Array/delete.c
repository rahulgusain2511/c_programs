#include<stdio.h>
int main()
{
    int i,j,arr1[5],pos,k,sum,l;
    printf("enter elements of an array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter the position you want to delete");
    scanf("%d",&pos);
    for (i = pos; i < 5; i++)
    {
        arr1[i] = arr1[i+1];
    }    
    for (i = 0; i < 5-1; i++)
    {
        printf("%d",arr1[i]);
    }
    
}