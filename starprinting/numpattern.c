#include<stdio.h>
int main()
{
    int limit,i,j;
    printf("enter a number");
    scanf("%d",&limit);


    for(i=1;i<=limit;i++)
    {
        for(j=1;j<=limit;j++)
        {
            if(i%2==0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }

            
        }
        printf("\n");
    }

}