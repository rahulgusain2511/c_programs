#include<stdio.h>
int main()
{
    int i,j,num,c=0;
    int arr[5]={1,2,3,4,5};
    printf("enter a element ");
    scanf("%d",&num);
    for(i=0;i<5;i++)
    {
        if(arr[i]==num)
        {
            c++;

        }

    }
    if(c>0)
    {
        printf("number is found");
    }
    else
    {
        printf("number not found");
    }
    
}