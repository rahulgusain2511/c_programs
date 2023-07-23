#include <string.h>
#include <stdio.h>
int main()
{
    int i, j, count;
    char str[20] = "Nitinn";
    char freq[20];
    int len;
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        freq[i] = -1;
    }
    for (i = 0; i < len; i++)
    {
        count = 1;
        for (j = i + 1; j < len; j++)
        {
            if (str[i] == str[j])
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

    // print the frequency of each element

    for (i = 0; i < len; i++)
    {
        if (freq[i] != 0 )
        {
            printf("The frequency of  %c is =  %d\n",str[i],freq[i] );
        }        
    }

    // Find which one have a greater frequency
    for (i = 0; i < len; i++)
    {
        
    }

    
}