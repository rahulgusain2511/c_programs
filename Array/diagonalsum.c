#include<stdio.h>
int main()
{
    int i,j,c=0,sum=0;
    int arr1[3][3]={1,2,3,4,5,6,7,8,9};
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(i==c&&j==c)
           {
               sum=sum+arr1[i][j];
           }
        }
       c++;
    }
    printf("%d",sum);
    
}
