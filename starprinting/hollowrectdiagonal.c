#include<stdio.h>
int main()
{
    int i,j,m,n;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==3&&j==3)
            {
                printf("*");
            }
            else if(i==3&&j==2 || i==3&&j==4)
            {
                printf(" ");
            }
            
            else if(i==1||i==5||j==1||j==5||j==2||j==4)
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