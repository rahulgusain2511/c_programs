#include<stdio.h>
int main()
{
    int i,p,d;
    int arr[5]={11,13,12,14,16};
    for(i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            p=arr[i];
        printf("even is = %d\n",p);
        }
        else
        {
            d=arr[i];
        printf("odd is = %d\n",d);
        }
        

    }
}