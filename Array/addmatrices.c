#include<stdio.h>
int main()
{
    int i,j,sum=0;
    int arr1[2][2]={1,2,3,4};
    int arr2[2][2]={1,2,3,4};
    int arr3[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];       
            printf("%d",arr3[i][j]);

        }
        printf("\n");

    }
   

}