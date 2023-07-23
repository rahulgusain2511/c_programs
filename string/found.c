#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]={"shrey gangwar"};
    int len=strlen(str);
    int num,i;
    printf("enter the position of the character you want");
    scanf("%d",&num);
    for(i=0;i<len;i++)
    {
        if(i==num)
        {
            printf("%c",str[i]);
        }
    }
}