#include<stdlib.h>
#include<stdio.h>
{
#include<string.h>
int main()
    FILE *casechanging;
    FILE *casechanging1;
    // FILE *casechangingww;
    // casechangingww=fopen("casechanging.txt","w");
    // char che[20]="I LOve My INdia";
    // int j;
    // for ( j = 0; j < strlen(che); j++)
    // {
    //     fprintf(casechangingww,"%c",che[j]);
    // }
    casechanging=fopen("casechanging.txt","r");
    int i=0;
    char ch;
    char arr[50];
        while ((ch = getc(casechanging))!= EOF)
        {
                if(ch>='A' && ch<='Z')
                {
                    ch=ch+32;
                }
                else if(ch>='a' && ch<='z')
                {
                    ch=ch-32;
                }   
             arr[i]=ch;
             i++;
        }
        for ( i = 0; i < strlen(arr); i++)
        {
            printf("%c",arr[i]);
        }
        casechanging1=fopen("casechanging.txt","w");
        for ( i = 0; i < strlen(arr); i++)
        {
            fprintf(casechanging1,"%c",arr[i]);
        }
        
}