#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=11;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j==5||i==6)
            {
                printf("+");
                
            }
            else
            {
                printf(" ");
            }
            printf(" ");


            
        }
        printf("\n");
    }
}