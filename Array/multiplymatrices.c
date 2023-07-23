#include<stdio.h>
int main()
{
    int i,j,arr1[2][2],arr2[2][2],mul=0,sum,k,arr3[2][2];
    printf("please enter the elements of the matrices");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("please enter the elements of the second matrices");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum =0;
           for(k=0;k<2;k++)
           {
                sum=sum+arr1[j][k]*arr2[k][j];

           }
           arr3[i][j]=sum;
        }   
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",arr3[i][j]);
        }
        printf("\n");
    }
    
    
    
    
    
}