#include<stdio.h>
int main()
{
    int i,j,arr[5],num,c=0;
    printf("enter elements of an array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the number you want to search");
    scanf("%d",&num);
    for(j=0;j<4;j++)
    {
        if(arr[j]==num)
        {
            c++;
        }
    }
    if(c==1)
    {
        printf("number is present");
    }
    else
    {
        printf("number is not present");
    }
    
}