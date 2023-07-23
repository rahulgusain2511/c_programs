#include<stdio.h>

int table(int i) {
    return i;
}
int main()
{
    int i,limit,t;
    int *ptr;
    ptr = &limit;
    printf("enter a limit");
    scanf("%d",ptr);

    for (int i = 1; i <= *ptr; i++)
    {
        t=table(i);
        printf("%d",t);
    }
    
    // printf("%d",t);



}