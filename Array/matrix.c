#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[2][2],i,j;
    printf("Enter the row and column");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }

    printf("Entered array is \n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}
