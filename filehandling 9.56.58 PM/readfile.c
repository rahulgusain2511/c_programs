#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *fp;
    int p ;
    fp = fopen("test.txt","r");
 if (fp == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
    // printf("Enter the number that you want to save");
    // scanf("%d",&p);
    fscanf(fp,"%d",&p);
    printf("Num is = %d",p); 
    return 0;
}
