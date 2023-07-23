#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    int sum=1;
    char name[20]="shrey gangwar";
    FILE *point;
    point=fopen("count.txt","w");
    if(point != NULL)
    {
        printf("FILE FOUND\n");
    }
    else
    {
        printf("FILE NOT FOUND\n");

    }
   
    
        for(i=0;i<strlen(name);i++)
        {
           if(name[i] == ' ')
           {
               sum++;
           } 
        }
        int len=strlen(name);
        fprintf(point,"numbers of letter are %d\n",len);
        fprintf(point,"number of words %d",sum);

        
        
        
    


    
}