#include <stdio.h> 
int main()
{
    char ch;
    printf("enter a character");
    scanf("%c", &ch);
    printf("%c",ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("entered character is aplhabet");
    }
    else if (ch >= '0' && ch <= '9')
    {


        printf("entered character is digit");
    }
    
    else
    {
        printf("entered character is special character");
    }
    return 0;
}