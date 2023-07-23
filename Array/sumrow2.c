#include<stdio.h>
int main()

{
    int i,j,arr[3][3],sum,c=1;
    printf("please enter the elements of the array");
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
            sum=sum+arr[i][j];
        }
        printf("sum of row %d = %d",c++,sum);
        printf("\n");
        sum=0;
    }
}