#include<stdio.h>
int main()
{
    int i,j,k,m=12,n=14;
    {
        for(j=1;j<=14;j=j+2)
        {
                for(i=m;i>=1;i=i-1)
                {
                    printf(" ");

                }
            for(k=1;k<=j;k++)
            {
                printf("*");
            }
            printf("\n");
            m--;
        }
        for(j=15;j>=1;j=j-2)
        {
                for(i=1;i<=m;i=i+1)
                {
                    printf(" ");

                }
            for(k=1;k<=j;k++)
            {
                printf("*");
            }
            printf("\n");
            
            m++;
        }
    }
}   