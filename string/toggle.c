#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char str[20]="ShReY";
    int len =strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]>'a'&&str[i]<'z')
        {
            str[i]=str[i]-32;
        }
        else if(str[i]>'A'&&str[i]<'Z')
        {
            str[i]=str[i]+32;
        }
    }
    for(i=0;i<len;i++)
    {
        printf("%c",str[i]);
    }

}