#include<string.h>
#include<stdio.h>
int main()
{
    char str[20]={"shrey gangwar"};
    int i,len;
    char occ;
    len=strlen(str);
    printf("enter the character whose occurence you want to find");
    scanf("%c",&occ);
    for(i=0;i<len;i++)
    {
        if(str[i]==occ)
        {
            printf("%d",i);
        }
    }
} 