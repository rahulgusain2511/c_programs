#include<stdio.h>
int main()
{
    int i,c=0;
    int arr[5]={-12,10,-13,-14,15};
    for(i=0;i<5;i++)
    {
        if(arr[i]<0)
        {
            c++;
            printf("%d",arr[i]);
        }
    }
    printf("\n%d",c);
}