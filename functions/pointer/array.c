#include<stdio.h>
int main()
{
    int arr[4],i;
    int *pt;
    pt = &arr[0];
    printf("enter the elements of the array");
    for(i=0;i<4;i++)
    {
        scanf("%d",pt);
        pt++;
    }
    printf("Entered elements are");
    pt = &arr[0];
    for(i=0;i<4;i++)
    {
     printf("%d\n",*pt);
        pt++;
    }


}