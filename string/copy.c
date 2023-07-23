#include<stdio.h>
int main()
{
    char s1[10]="shrey";
    char s2[10];
   int len=0;
   while(s1[len]!='\0')
   {
       s2[len]=s1[len];
       len++;
   } 
   printf("%s",s2);
}