#include<stdlib.h>
#include<stdio.h>
int main()
{
    int num;
    FILE *point;
    point=fopen("1.txt","w");
    if(point != NULL)
    {
        printf("File found\n");
    }
    else
    {
        printf("file not found\n");
    }
    printf("Enter -1 to exit");
    while(1)
    {
        scanf("%d",&num);
        if(num != -1)
        {
            fprintf(point,"%d",num);
        }
        else
        {
            break;
        }
    }
    fclose(point);
    return 0;
            
}
        
        
    
