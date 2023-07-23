#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,d=0;
    char str1[10]="shreygy";
    char str2[10]="shreyg";
    int c=strlen(str1);
    for(i=0;i<=c;i++)
    {
        if(str1[i]!=str2[i])
        {
            d++;

        }
    }
    d==1?printf("not equal"):printf(" equal");
}