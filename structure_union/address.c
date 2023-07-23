#include<stdio.h>
struct diary
{
    char name[100][100];
    int address[30];
}f1,f2;
int main()
{
    int i,j;
    char *ptr = &f1.name[0][0];
    printf("enter names");
    for(i=0;i<2;i++)
    {
        scanf("%s",ptr+i);
    }
    printf("%s",*f1.name);
    // printf("enter addresses");

    // for(i=0;i<2;i++)
    // {
    //     scanf("%d",&f2.address[i]);
    // }
    // for(i=0;i<2;i++)
    // {
    //     printf("%s",ptr+i);
    // }
    // for(i=0;i<2;i++)
    // {
    //     printf("%d",f2.address[i]);
    // }
}