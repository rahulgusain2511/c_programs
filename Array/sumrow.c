#include<stdio.h>
int main()
{
    int i,j,sum=0,c=1,col=0;
    int arr1[3][3]={1,2,3,4,5,6,7,8,9};
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+arr1[i][j];
            col = col+arr1[j][i];

        }
        printf("sum of row %d is %d\n",c,sum);
        printf("sum of column %d is %d\n",c,col);
        sum=0;
        col=0;
        c++;

    }
}