#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j,count=0,len;
    char temp;
    char str[30]="    a love india";
    while (str[i] != '\0')
    {
        if(str[i] >= 97 && str[i] <= 122) {
            break;
        } else {
            count++;
        }
        i++;
    }
    
    for (i = 0; i < count; i++)
    {
        len = strlen(str);
        for (j = 0; j < len; j++)
        {
            str[j] = str[j+1];
        }
    }

    
    
    
    printf("%s", str);
}