#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char sum;
    char str[20]="shrey";
    int len=strlen(str);
    char l[20]=strrev(str);
    printf("%s",l);

    for(i=len;i>=0;i--)
    {
        printf("%c",str[i]);
    }

   
     
}