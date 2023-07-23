#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    FILE *ptr;

    ptr = fopen("integers","r");

    if (ptr != NULL)
    {
        printf("File exist");
        return 0;
    } else {
        printf("file exists\n\n");
    }

    while ((num = getw(ptr))  != EOF)
    {
        printf("%d",num);
    }
    
    fclose(ptr);
    
    return 0;
}
