#include<stdio.h>
int main()
{
    int i,j,m,n=5;
    for(i=1;i<=5;i++)
    {
        for(m=5;m>=i;m--)
        {
            printf(" ");
        }
        for(j=1;j<=5;j++)
        {
            if(i==1||i==5||j==1||j==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
            printf("\n");
                
    }
}