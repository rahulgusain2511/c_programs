#include<stdio.h>
int main(int argc, char const *argv[])
{
    int limit,i,j;
    printf("Enter the limit\n");
    scanf("%d",&limit);
    for (i = 1; i <=limit; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}
