#include<stdio.h>
int main()
{
    int i,j,arr[2][2],mul,a,b,c,d;
    printf("enter the elements of the matrices");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    a=arr[0][0];
    b=arr[0][1];
    c=arr[1][0];
    d=arr[1][1];
    mul=(a*d)-(b*c);
    printf("determinant = %d",mul);
}