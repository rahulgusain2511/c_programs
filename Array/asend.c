#include<stdio.h>
int main()
{
    int i,j,temp;
    int arr[5]={23,11,76,45,99};
    for ( i = 0; i < 5; i++)
    {
      for(j=i+1;j<5;j++)
      {
          if (arr[i] < arr[j])
          {
              temp = arr[i];
              arr[i] = arr[j];
              arr[j]= temp;
          }
          
      }
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    
}