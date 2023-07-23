#include<string.h>
#include<stdio.h>
int main()
{
    int i,len,pos;
    char str[20]={"shrey gangwer"};
    char occ;
    len=strlen(str)
;    printf("enter the character whose lest occurence is to be found");
    scanf("%c",&occ);
    for(i=0;i<len;i++)
    {
        if(str[i]==occ)
        {
            pos=i;
        }
    }
    printf("%d",pos);

}