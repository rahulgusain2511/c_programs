#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *occword;
    int i, j = 0, c = 0;
    int count = 0;
    int check_count;
    int pos;
    char name[20] = "india is my is is ry";
    char word[20];
    occword = fopen("occword.txt", "w");
    if (occword != NULL)
    {
        printf("file found\n");
    }
    else
    {
        printf("file not found\n");
    }
    printf("enter the word whose occurenxce you want to see");
    scanf("%s", word);
   
    
    for (i = 0; i < strlen(name); i++)
    {
        if (word[0] == name[i])
        {
            check_count = 0;
            pos = i;
            // printf("%d",pos);
            for (j = 0; j < strlen(word); j++)
            {
                if (name[pos] != word[j])
                {
                    check_count = -1;
                    break;
                }
                pos++;
            }
            if (check_count != -1)
            {
                printf("%d",i);
                count++;
                break;
            }
        }
    }
    printf("%d",count);
}
