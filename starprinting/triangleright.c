#include<stdio.h>
int main()
{
    int limit,i,j;
    printf("enter a number");
    scanf("%d",&limit);
    for(i=1;i<limit;i++)
    {

        for(j=1;j<=i;j++)
        {
           printf("*\t"); 
        }
        printf("\n");
    }
    
    

}