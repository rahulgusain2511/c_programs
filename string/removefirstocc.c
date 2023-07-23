#include <stdio.h>
#include <string.h>
int main()
{
    int i, count = 0;
    char str1[20] = "i love string";
    char occ;
    int len = strlen(str1);
    printf("enter the character you want to remove");
    scanf("%c", &occ);
    for (i = 0; i < len; i++)
    {
        if (count == 0)
        {
            if (str1[i] == occ)
            {
                str1[i] = ' ';
                count++;
            }
            /* code */
        }
    }
    for(i=0;i<len;i++)
    {
        printf("%c",str1[i]);
    }
}