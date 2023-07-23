#include<stdio.h>
int main()
{
    int arr1[2][2],arr2[2][2],i,j,arr3[2][2],k,l;
    printf("enter the elements of array 1");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("enter the elements of second array");
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
      
    }
    for(k=0;k<2;k++)
    {
        for(l=0;l<2;l++)
        {
            arr3[k][l]=+arr1[k][l]+arr2[k][l];
        }
    }
    for(k=0;k<2;k++)
    {
        for(l=0;l<2;l++)
        {
            printf("%d",arr3[k][l]);
            printf(" ");
        }
        printf("\n");
    }
}