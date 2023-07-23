#include <stdio.h>
#define size 50
int main()
{
    int arr[10], freq[10], limit, i, j, count;
    printf("Enter the limit");
    scanf("%d", &limit);
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for (i = 0; i < limit; i++)
    {
        count = 1;
        for (j = i + 1; j < limit; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    for (i = 0; i < limit; i++)
    {
        if (freq[i] != 0)
        {
            printf("%d is = %d\n", arr[i], freq[i]);
        }
    }
    
}