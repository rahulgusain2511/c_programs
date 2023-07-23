#include<stdio.h>

union Fruit {
    int price;
    char name[60];
    char m[260];
} u;

struct book {
    int price;
    char m[260];
    char name[60];
} s;

int main()
{
    printf("%lu",sizeof(u));
    printf("\n");
    printf("%lu",sizeof(s));


    return 0;
}
