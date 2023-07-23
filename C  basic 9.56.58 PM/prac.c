#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0;
    char ch[20];
    printf("enter a string");
    scanf("%s",ch);
   
    while(j<strlen(ch))
    {
        for(i=0;i<=j;i++)
        {
            printf("%c",ch[i]);
            
        }
        printf("\n");
        j++;
    }
}