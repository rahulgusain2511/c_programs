#include<string.h>
#include<stdio.h>
int main()
{
    int i,j,m=0,count=0;
    char str1[20]="shs";
    char str2[20];
    int l=strlen(str1);
    for(i=l-1;i>=0;i--)
    {
        str2[i]=str1[m];
        m++;
    
    }

    for(j=0;j<l;j++)
    {
        if(str1[j]!=str2[j])
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("palindrone");

    }
    else
    {
        printf("not a palindrone");
    }
    printf("%s",str2);
}    
