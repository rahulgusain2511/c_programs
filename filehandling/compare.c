#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *point1,*point2;
    point1=fopen("1.txt","r");
    point2=fopen("2.txt","r");
    char p1,p2;
    int i=0;
    while ((p1 = getc(point1)) != EOF || (p2 = getc(point2)) != EOF)
    {
        if (p1 != p2)
        {
            i++;
            break;
        }
        
    }
    if(i>0)
    {
        printf("file are not equal");

    }
    else
    {
        printf("file ar equal");
    }
    i=0;
    

    
}