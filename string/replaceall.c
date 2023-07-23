#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]="i love india";
    char rep,ent;
    int c,i;
    int len=strlen(str);
    printf("enter the character to be replaced");
    scanf(" %c",&rep);
    printf("enter the character with whome you want to replace");
    scanf(" %c",&ent);
    for(i=0;i<len;i++)
    {
        if (str[i]==rep)
        {
            str[i]=ent;
        }
        
    }
    for(i=0;i<len;i++)
    {
        printf("%c",str[i]);
    }
}