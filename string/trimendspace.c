#include <stdio.h>
#include <string.h>
int main()
{
    int i, j,c = 0;
    char str[20] = "a love india      ";
    char str2[20];
    int len = strlen(str);
    for (i = len - 1; i >= 0; i--)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            break;
        }
        else
        {
            c++;
        }

    }
    for(j=0;j<len-c;j++)
    {
        str2[j]=str[j];
    }

    printf("%s",str2);
}