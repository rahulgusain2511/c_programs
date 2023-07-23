

#include<stdio.h>
int main()
{
    int i,j,arr1[3][3],sum,arr2[3][3];
    printf("enter the elements of matrices");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
        }

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            arr2[i][j]=arr1[j][i];

        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",arr2[i][j]);
            
        }
           
        printf("\n");
        

    }
}