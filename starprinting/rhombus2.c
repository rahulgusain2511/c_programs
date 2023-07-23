#include<stdio.h>
int main()
{
    int i,j,m,n=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf(" ");
        }
        for(m=1;m<=5;m++)
        {
            printf("*");

        }
        printf("\n");
        n++;
        
        
    }
}