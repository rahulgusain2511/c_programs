#include<stdio.h>
int main()
{
    int i,j,sum;
    int arr[2];
    int arr2[2];
    int *pt2=&arr[0];
    int *pt1=&arr2[0];
    for(i=0;i<2;i++)
    {
        scanf("%d",pt2);
        pt2++;
    }
    for(j=0;j<2;j++)
    {
        scanf("%d",pt1);
        pt1++;
    }

    pt1=&arr2[0];
    pt2=&arr[0];

    for(j=0;j<2;j++)
    {
        sum = *pt1;
        *pt1 = *pt2;
        *pt2 = sum;
        pt1++;
        pt2++;
    }
     pt1=&arr2[0];
    pt2=&arr[0];
     for(j=0;j<2;j++)
    {
        
        printf("%d",*pt2);
        pt2++;
    }
    for(j=0;j<2;j++)
    {
        
        printf("%d",*pt1);
        pt1++;
    }



}
