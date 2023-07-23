#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, k, start_pos, end_pos, pos;
    char removeword[20];
    FILE *point;
    char name[20];
    char checkname = 'a';
    // point=fopen("removeword.txt","w");
    // if(point != NULL)
    // {
    //     printf("file found");
    // }
    // else
    // {
    //     printf("file not found");
    // }
    // int p=2;
    // while (1)
    // {
    //    if(p != 0)
    //    {
    //        scanf("%s",name);
    //        p--;
    //        fprintf(point,"%s",name);
    //    }
    //    else
    //    {
    //        break;
    //    }

    // }
    // // printf("string inserted");
    // fclose(point);
    point = fopen("removeword.txt", "r");
    fscanf(point, "%s", name);

    printf("Enter the word you want to remove\n");
    scanf("%s", removeword);
    // printf("%s",removeword);

    for (i = 0; i < strlen(name); i++)
    {
        if (name[i] == removeword[0])
        {
            start_pos = i;
            pos = i;
            // printf("%d",pos);
            for (k = 0; k < strlen(removeword); k++)
            {
                if (removeword[k] != name[pos])
                {
                    start_pos = -1;
                    break;
                }
                else
                {
                    // printf("%c",name[pos]);
                    // printf("%d\t",pos);
                    pos++;
                }
            }
            if(start_pos != -1) {
                break;
            }
        }
    }    
    point = fopen("removeword.txt", "w");
    
    i = start_pos;
    int len = strlen(removeword); 
    len+=i;
    // printf("%s",name);
    for (i = start_pos; i < len; i++)
    {
        name[i] = ' ';
    }
    1fprintf(point,"%s",name);
}
