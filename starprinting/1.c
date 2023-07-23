#include<stdio.h>
int main()
{
    int i,j,k,l,m=5,t,o=1;
    for(i=1;i<5;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        for(l=1;l<m;l++)
        {
            printf(" ");
        }
        for(t=5;t>o;t--)
        { printf(" ");
        }
        for(k=0;k<i;k++)
        { 
            printf("&");
        }
        printf("\n");
        m--;
        o++;
    }
}