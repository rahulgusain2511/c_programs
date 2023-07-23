#include<stdio.h>
int main()
{
    int i,j;
    int arr[5]={5,9,1,2,4},temp;
    printf("enter elements of array");
    for(i=0;i<5;i++)
    {
        for (j = i+1; j < 5; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    for(i=0;i<5;i++)
    {
        printf("second largest element is = %d",arr[1]);
    }
    
    
    // 
    // 5,6,4,3,1;
    // 
}