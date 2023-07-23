#include<stdio.h>
int main()
{
    int i,j,k,m=12;
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
    }
}