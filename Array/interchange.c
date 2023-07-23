#include <stdio.h>
int main()
{
    int i, j, arr1[3][3], temp, limit = 3, c;
    printf("please enter the elements of the matrices");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        c = i;
        temp = arr1[i][c];
        arr1[i][c] = arr1[i][limit-c -1];
        arr1[i][limit-c - 1] = temp;
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", arr1[i][j]);
        }
        printf("\n");
    }
}