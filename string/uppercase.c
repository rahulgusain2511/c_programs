#include<string.h>
#include<stdio.h>
int main()
{
    int i;
    char str[20]="I LOVE";
    int len=strlen(str);
    
    for(i=0;i<len;i++)
    {
        if(str[i]>'A'||str[i]<'Z')
        {
            str[i]=str[i]+32;
        }
    }
    for(i=0;i<len;i++)
    {
        printf("%c",str[i]);
    }
}