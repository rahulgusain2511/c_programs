#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,vowel=0,conso=0;
    char str[20]="shrey gangwar";
    int len=strlen(str);
    for(i=0;i<len;i++)
    {
        if((str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')||(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'))
        {
            vowel++;
        }
        else
        {
            conso++;
        }
        
    }
    printf("total number of vowel are %d\n",vowel);
    printf("total number of consonent are %d",conso);

}