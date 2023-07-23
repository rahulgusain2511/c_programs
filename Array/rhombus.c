#include<stdio.h>
int main()
{
    int limit,i,j,m;
    printf("enter limit");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        for(m=5;m>=i;m--)
        {
            printf(" ");
        }
        for(j=1;j<=limit;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}