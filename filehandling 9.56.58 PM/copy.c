#include <stdlib.h>
#include <stdio.h>
int main()
{
    int num, p;
    FILE *f1, *f2;
    f1 = fopen("copy.txt", "w");
    if (f1 != NULL)
    {
        printf("file found");
    }
    else
    {
        printf("file not found");
    }
    printf("press -1 to exit");
    while (1)
    {
        scanf("%d", &num);
        if (num != -1)
        {
            putw(num,f1);
        }
        else
        {
            break;
        }
    }
    printf("numbers are inserted");
    fclose(f1);

    f1 = fopen("copy.txt", "r");
    f2 = fopen("copy2.txt", "w");

    if (f1 != NULL)
    {
        printf("File exist");
    }
    else
    {
        printf("FIle does not exist");
    }

    while ((p = getw(f1)) != EOF)
    {
        printf("%d",p);
        
        putw(p,f2);
    }
    fclose(f1);
    f2 = fopen("copy2.txt", "r");

     while ((p = getw(f2)) != EOF)
    {
        printf("%d", p);
    }

    
}