#include<stdio.h>
int main()
{
    int i;
    
    int arr[]={1,5,-5,-100,99,-76};
    {
        for(i=0;i<=5;i++)
        {
            if(arr[i]<0)
            {
                printf("%d\n",arr[i]);
            }
        }
    }
    

}