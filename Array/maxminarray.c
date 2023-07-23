#include <stdio.h>
int main()
{
    int i, j, arr[5], k, max, min,temp;
    printf("enter element of an array");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter elements are \n");
    for (j = 0; j < 5; j++)
    {
        for (k = j+1; k < 5; k++)
        {
            if(arr[j] > arr[k]) {
                max = arr[j];
                arr[k] = arr[j];
                arr[j] = max;
            }
        }
    }
    printf("%d",max);
}