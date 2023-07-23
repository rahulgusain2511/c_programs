#include <stdio.h>
#define size 20

int main(int argc, char const *argv[])
{
    int a[size], b[size], j, i, count;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        b[i] = -1;
    }

    for (i = 0; i < 5; i++)
    {
        count = 1;
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                b[j] = 0;
            }
        }
        if (b[i] != 0)
        {
            b[i] = count;
        }
    }

    for (i = 0; i < 5; i++)
    {
        if (b[i] != 0)
        {
            printf("%d is = %d\n", a[i], b[i]);
        }
    }

    return 0;
}
