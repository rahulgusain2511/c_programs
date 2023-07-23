#include<stdio.h>
int main()
{
    int i,j,arr1[i][j],sum=0;
    printf("please enter the elements of the matrices");
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
            sum=sum+arr1[j][i];
        }
    printf("columnwise sum is %d",sum);
    sum=0;
    }
}