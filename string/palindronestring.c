#include<string.h>
#include<stdio.h>
int main()
{
    int i,c=0,j,r=0;
    char str[20]="madam";
    char str2[20];
    for(i=strlen(str)-1;i>=0;i--)
    {
        str2[c]=str[i];
        c++;
    }
    for(j=0;j<strlen(str);j++)
    {
        if(str2[j]!=str[j])
        {
            r++;
        }
    }
    if(r>0)
    {
        printf(" not palindrome ");
    }
    else
    {
        printf("palindrome");
    }
    
    
}