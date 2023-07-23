#include<stdio.h>
#include<string.h>
int main()
{
    char c[20]="shrey";
    char d[10]="gangwar";
    char e[20];
    int a, b,i,j,p=0;
    a=strlen(c);
    b=strlen(d);
    for(i=0;i<=a;i++)
    {
        e[i]=c[i];
    }
   
    for(j=i;j<=b+a;j++)
    {
        e[j]=d[p];
        p++;
    }
    for (i = 0; i <= b+a; i++)
    {
        printf("%c",e[i]);
    }
    

    

    

}
