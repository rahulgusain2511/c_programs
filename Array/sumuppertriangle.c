#include<stdio.h>
int main()
{
    int i,j,arr[3][3],sum;
    printf("please enter the elements of matrices");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=i;j<3;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    printf("%d",sum);
}