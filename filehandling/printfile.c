#include<stdio.h>
#include<stdlib.h>
int main()
{

    FILE *printfile;
    char c;
    printfile=fopen("t.txt","r");

    if(printfile != NULL)
    {
        printf("File Found\n");
    }
    else
    {
        printf("File Not Found");
    }
    
    while ((c = getc(printfile))!= EOF)
    {
        printf("%c",c);
    }
    
    
}