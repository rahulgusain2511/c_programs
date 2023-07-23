#include<string.h>
#include<stdio.h>

int main()
{
    char str1[20]="shrey";
    char str2[20]="gangwar";
    char str3[20];
    int c,ret;
    printf("%lu",strlen(str1));
    printf("%s",strcpy(str3,str2));
    ret = strcmp(str1,str2);


if(ret < 0) {
      printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }
    // c==1?printf("not equal"):printf("equal");

    printf("%s",strcat(str1,str2));
}