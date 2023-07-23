#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *ptr, *ptr2;
    int num;


    ptr = fopen("integers","r");
    ptr2 = fopen("newfile", "w");
    if (ptr != NULL)
    {
        printf("file exists\n");
    } else {
        printf("file does not exists ! Try again");
        return 0;
    }

    while ((num = getw(ptr)) != EOF)
    {
        printf("%d", num);
        if(num %2  == 0) {
            putw(num,ptr2);
        }
    }
    
    fclose(ptr);
    
    
   return 0;
}
