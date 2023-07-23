#include<stdio.h>
int main()
{
    int i,j,limit;
    printf("enter limit\t");
    scanf("%d",&limit);
    for(i=limit;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
           printf("*");     
        }
        printf("\n");
    }
    return 0;
}