#include<stdlib.h>
#include<stdio.h>
int main()
{
    FILE *p;
    char name[12] ;
    p=fopen("string.txt","wb");
    scanf("%s",name);
    fprintf(p,"%s",name);
    // fscanf(p,"%s",name);
    // printf("%s",name);

}