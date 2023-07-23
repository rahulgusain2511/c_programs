#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,c=0,count;
    char str1[20]="shrey gangwar likes coding";
     
    int len= strlen(str1);
    for(i=0;i<len;i++)
    {
        if(str1[i]==' ')
        {
            c++;
        }
    }
   printf("total number words are %d",c+1);
}