#include<stdio.h>
#include<string.h>

int main()
{
    char str[10] = "string";
    int len=0;


    while (str[len] != '\0')
    {
        len++;

    }
    printf("%d",len);

    
    return 0;
}
