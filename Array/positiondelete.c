#include<stdio.h>
int main()
{
    int i,p,j;
    int arr[5]={1,2,3,4,5};
    printf("enter a position");
    scanf("%d",&p);
    for(i=p;i<5;i++)
    {
       arr[i]=arr[i+1];
    }
    for(i=0;i<4;i++)
    {
        printf("%d",arr[i]);
    }
}