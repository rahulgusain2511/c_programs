#include<stdio.h>
int main()
{
    int arr1[2][2]={1,2,3,4};
    int i,j,a=2;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            arr1[i][j]=2*arr1[i][j];
            printf("%d",arr1[i][j]);
        }
        
    }
}