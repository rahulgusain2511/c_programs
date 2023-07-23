#include<stdio.h>
int main()
{
    int m,i,j,a,b,l,n=1;
    for(i=5;i>=1;i--)
    {
        for (m=1;m<=i;m++)
        {
            printf(" ");
        }
        for ( j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    for(b=2;b<=5;b++)
    {
        for ( n = 0; n <=a; n++)
        {
            printf(" ");

        }
        for(l=1;l<=b;l++)
        {
            printf("*");
        }
        printf("\n");
        a++;
    }
}
