#include<string.h>
#include<stdio.h>
int main()
{
    int i;
    char str[20]="hello";
    for(i=strlen(str)-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}