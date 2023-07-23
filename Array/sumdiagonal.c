#include<stdio.h>
int main()
{
    int i,j,arr1[3][3],sum;
    printf("enter the elements of the array");
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
            if(i==0&&j==0||i==1&&j==1||i==2&&j==2)
            {
                sum=sum+arr1[i][j];
            }
        }
    }
    printf("%d",sum);
}