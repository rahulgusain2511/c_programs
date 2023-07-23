#include<stdio.h>
int main()
{
    int i,j;
    for(i=6;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(i==5&&j==2||i==5&&j==3||i==5&&j==4||i==4&&j==2||i==4&&j==3||i==3&&j==2)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
            
        }
        printf("\n");
    }
}