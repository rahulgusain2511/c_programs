#include<stdio.h>
int main()
{
    int i,j,m,n=1;
    for(i=1;i<=11;i=i+2)
    {
        for(m=6;m>=n;m--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(i==1||j==1||i==11||i==3&&j==3||i==5&&j==5||i==7&&j==7||i==9&&j==9)
            {
                printf("*");

            }
            else
            {
                printf(" ");
            }
            
        }
            printf("\n");
            n++;
    }
}