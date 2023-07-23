#include<stdio.h>
int main()
{
    int i,j,arr[3][3],sum;
    printf("enter elements of an array");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==0&&j==2||i==1&&j==1||i==2&&j==0)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("sum = %d",sum);
}