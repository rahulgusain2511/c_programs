#include<stdio.h>
int main()
{
    int i,b;
    int arr1[5]={1,2,3,4,5};
    int arr2[5];
    for(i=0;i<5;i++)
    {
        b=arr1[i];
        arr2[i]=b;
        printf("%d",arr2[i]);
    }
    
}