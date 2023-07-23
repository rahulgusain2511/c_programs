#include<stdio.h>
int main()
{
    int i,limit;
    int arr[10];
    printf("enter the limit");
    scanf("%d",&limit);
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<limit;i++)
    {
        printf("%d\n",arr[i]);
    }
}