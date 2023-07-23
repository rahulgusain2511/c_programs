#include<stdlib.h>
#include<stdio.h>
int main()
{
    FILE *p;
    int num;
    p=fopen("save.txt","r");

    printf("enter a number");
    fscanf(p,"%d",&num);
    printf("%d",num);
   
    fclose(p);
    
}