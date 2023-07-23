#include<stdio.h>


int main(int argc, char const *argv[])
{
    FILE *ptr;
    ptr = fopen("integers","w");
    int num;

    if (ptr != NULL)
    {
        printf("File exists or create");
    } else {
        printf("File doesn't exist");
        return 0;
    }

    printf("If you want to exit then Please enter -1");
    while (1)
    {
        scanf("%d",&num);
        if(num != -1) {
            putw(num,ptr);
        } else {
            break;
        }
    }

    printf("Data item has been inserted");
    
    fclose(ptr);
    
    return 0;
}
