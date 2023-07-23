#include<stdlib.h>
#include<stdio.h>
int main()
{
    FILE *ptr;
    char name[1000];
    int p;

    ptr=fopen("nameshrey.txt","a");
    if(ptr!=NULL)
    {
        printf("file found");
    }
    else
    {
        printf("file not found");
    }
    

    printf("Enter the limit you want to enter the name\n");
    scanf("%d",&p);
    while (p != 0 )
    {
    scanf(" %s",name);
    fprintf(ptr,"%s",name);
    p--;
    }

    
    
}