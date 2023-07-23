#include<stdio.h>
int main()
{
    int i,j,m,n=1,p,k,l=1,t;
    for(i=1;i<=10;i=i+2)
    {
        for(m=5;m>=n;m--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
        n++;
    }
    for(p=1;p<=11;p=p+2)
    {
        for(t=2;t<=l;t++)
        {
            printf(" ");
        }
        for(k=11;k>=p;k--)
        {
            printf("*");
        }
        l++;
        printf("\n");
    }    
}