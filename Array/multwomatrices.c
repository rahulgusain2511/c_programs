#include <stdio.h>
int main()
{
    int arr1[2][2] = {1, 2, 3, 4};

    int arr2[2][2] = {1, 2, 3, 4};
    int arr3[2][2];
    int sum;
    int i, j, l;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum = 0;
            for ( l = 0; l < 2; l++)
            {
                sum+= arr1[i][l] * arr2[l][j];
            }
            arr3[i][j] = sum;
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d",arr3[i][j]);
        }
        printf("\n");
    }
    
}