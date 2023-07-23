#include<string.h>
#include<stdio.h>
int main()
{
    int i,len,pos;
    char str[20]={"abcabcabcddc"};
    len=strlen(str);
    char occ;
    printf("enter the character whose position is to be found");
    scanf("%c",&occ);
    for(i=0;i<len;i++)
    {
        if(str[i]==occ)
        {
            pos=i;
            printf("%d\n",pos);
        }
    }
}