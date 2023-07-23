#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
    char str[20]="yes i love india";
    for(i=0;i<strlen(str);i++)
    {
        if(str[i] == ' ')
        {
            count++;
        }

    }
    printf("%d",count+1);
}